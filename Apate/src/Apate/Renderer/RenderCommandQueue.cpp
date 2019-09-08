#include "APpch.h"
#include "RenderCommandQueue.h"

#define AP_CMD_BUFFER_DATA_DIM 10 * 1024 * 1024
#define AP_RENDER_TRACE(...) AP_CORE_TRACE(__VA_ARGS__)


namespace Apate {

	RenderCommandQueue::RenderCommandQueue()
	{
		m_CommandBuffer = new unsigned char[AP_CMD_BUFFER_DATA_DIM];
		m_CommandBufferPtr = m_CommandBuffer;
		m_CommandCount = 0;
		memset(m_CommandBuffer, 0, AP_CMD_BUFFER_DATA_DIM);
	}

	RenderCommandQueue::~RenderCommandQueue()
	{
		delete[] m_CommandBuffer;
	}

	void * RenderCommandQueue::Allocate(RenderCommandFn func, unsigned int size)
	{
		*(RenderCommandFn*)m_CommandBufferPtr = func;
		m_CommandBufferPtr += sizeof(RenderCommandFn);

		*(unsigned int*)m_CommandBufferPtr = size;
		m_CommandBufferPtr += sizeof(unsigned int);

		void* memory = m_CommandBufferPtr;
		m_CommandBufferPtr += size;

		m_CommandCount++;
		return memory;
	}

	void RenderCommandQueue::Execute()
	{
		AP_RENDER_TRACE("RenderCommandQueue::Execute -- {0} command, {1} bytes", m_CommandCount, (m_CommandBufferPtr - m_CommandBuffer));


		byte* buffer = m_CommandBuffer;

		for (unsigned int i = 0; i < m_CommandCount; i++)
		{
			RenderCommandFn function = *(RenderCommandFn*)buffer;
			buffer += sizeof(RenderCommandFn);

			unsigned int size = *(unsigned int*)buffer;
			buffer += sizeof(unsigned int);
			function(buffer);
			buffer += size;
		}

		m_CommandBufferPtr = m_CommandBuffer;
		m_CommandCount = 0;
	}
}

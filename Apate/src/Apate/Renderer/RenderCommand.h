#pragma once

#include "RendererAPI.h"

namespace Apate {

	class RenderCommand
	{
	public:
		inline static void Init()
		{
			s_RendererAPI->Init();
		}

		inline static void SetClearColor(const glm::vec4& color)
		{
			s_RendererAPI->SetClearColor(color);
		}

		inline static void Clear()
		{
			s_RendererAPI->Clear();
		}


	private:
		static RendererAPI* s_RendererAPI;
	};

}

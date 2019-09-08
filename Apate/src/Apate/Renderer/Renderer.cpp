#include "APpch.h"
#include "Renderer.h"

namespace Apate {

	Renderer* Renderer::s_Instance = new Renderer();

	void Renderer::Init()
	{
		RenderCommand::Init();
	}

	void Renderer::BeginScene()
	{
	}

	void Renderer::EndScene()
	{
	}

}

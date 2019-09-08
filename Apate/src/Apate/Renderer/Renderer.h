#pragma once

#include "RenderCommand.h"

namespace Apate {

	class Renderer
	{
	public:
		static void Init();

		static void BeginScene();
		static void EndScene();

		// static void Submit()

		inline static RendererAPI::API GetAPI() { return RendererAPI::GetAPI(); }
	};

}

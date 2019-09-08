#pragma once

#include "Apate/Renderer/RendererAPI.h"

namespace Apate {

	class OpenGLRendererAPI : public RendererAPI
	{
		virtual void Init() override;
		virtual void SetClearColor(const glm::vec4& color) override;
		virtual void Clear() override;

		//virtual void DrawIndexed(const ...)
	};

}

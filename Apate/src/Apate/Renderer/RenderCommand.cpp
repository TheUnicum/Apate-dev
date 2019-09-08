#include "APpch.h"
#include "RenderCommand.h"

#include "Apate/Platform/OpenGL/OpenGLRendererAPI.h"

namespace Apate {

	RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;

}

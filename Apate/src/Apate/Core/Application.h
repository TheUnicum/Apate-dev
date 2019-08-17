#pragma once

#include "Apate/Core/Base.h"
#include "Apate/Core/Window.h"

namespace Apate {

	class APATE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// Implemented by CLIENT
	Application* CreateApplication();

}

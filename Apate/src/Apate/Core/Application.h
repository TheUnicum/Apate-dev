#pragma once

#include "Apate/Core/Base.h"
#include "Apate/Events/Event.h"
#include "Apate/Events/ApplicationEvent.h"

#include "Apate/Core/Window.h"

namespace Apate {

	class APATE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// Implemented by CLIENT
	Application* CreateApplication();

}

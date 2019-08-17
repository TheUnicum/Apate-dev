#pragma once

#include "Apate/Core/Base.h"

#include "Apate/Core/Window.h"
#include "Apate/Core/LayerStack.h"
#include "Apate/Events/Event.h"
#include "Apate/Events/ApplicationEvent.h"


namespace Apate {

	class APATE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// Implemented by CLIENT
	Application* CreateApplication();

}

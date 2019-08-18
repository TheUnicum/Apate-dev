#pragma once

#include "Apate/Core/Base.h"

#include "Apate/Core/Window.h"
#include "Apate/Core/LayerStack.h"
#include "Apate/Events/Event.h"
#include "Apate/Events/ApplicationEvent.h"

#include "Apate/ImGui/ImGuiLayer.h"

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

		inline Window& GetWindow() { return *m_Window; }

		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		LayerStack m_LayerStack;
	private:
		static Application* s_Instance;
	};

	// Implemented by CLIENT
	Application* CreateApplication();

}

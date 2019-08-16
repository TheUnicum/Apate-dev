#include "APpch.h"
#include "Application.h"

// Test Event
#include "Apate/Events/ApplicationEvent.h"

namespace Apate {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		// Test Event
		WindowResizeEvent winRes(1280, 720);
		AP_TRACE(winRes);

		while (true)
		{

		}
	}

}

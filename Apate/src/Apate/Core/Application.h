#pragma once

#include "Apate/Core/Base.h"

namespace Apate {

	class APATE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:

	};

	// Implemented by CLIENT
	Application* CreateApplication();

}

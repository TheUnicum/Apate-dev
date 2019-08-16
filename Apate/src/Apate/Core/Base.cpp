#include "APpch.h"
#include "Base.h"

#define AP_BUILD_ID "v0.1a"

namespace Apate {


	void InitializeCore()
	{
		Apate::Log::Init();

		AP_CORE_TRACE("Apate Engine {0}", AP_BUILD_ID);
		AP_CORE_TRACE("Initializing...");
	}

	void ShutdownCore()
	{
		AP_CORE_TRACE("Shuttting down...");
	}

}
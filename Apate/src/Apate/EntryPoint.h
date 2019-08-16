#pragma once


#ifdef AP_PLATFORM_WINDOWS

extern Apate::Application* Apate::CreateApplication();

int main(int argc, char** argv)
{

	Apate::Log::Init();
	AP_CORE_WARN("Initialize log!");

	Apate::Application* app = Apate::CreateApplication();
	app->Run();
	delete app;
}

#endif
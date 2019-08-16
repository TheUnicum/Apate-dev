#include "Apate.h"


class Sandbox : public Apate::Application
{
public:
	Sandbox()
	{
	}
};

Apate::Application* Apate::CreateApplication()
{
	return new Sandbox();
}

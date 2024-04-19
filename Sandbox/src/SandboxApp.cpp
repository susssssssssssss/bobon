#include "Bobon.h"

class Sandbox : public Bobon::Application {
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Bobon::Application* Bobon::CreateApplication()
{
	return new Sandbox();
}
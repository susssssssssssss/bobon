#pragma once

#ifdef BN_PLATFORM_WINDOWS

extern Bobon::Application* Bobon::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Bobon::CreateApplication();
	app->Run();
	delete app;
}
#endif 

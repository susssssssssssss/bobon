#pragma once

#include "Core.h"

namespace Bobon {
	class  BOBON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//This is to be defined in CLIENT
	Application* CreateApplication();

}
#pragma once

#ifdef BN_PLATFORM_WINDOWS
	#ifndef BN_BUILD_DLL
		#define BOBON_API __declspec(dllexport)
	#else
		#define BOBON_API __declspec(dllimport)
	#endif
#else
	#error Bobon Engine only Supports Windows!
#endif 
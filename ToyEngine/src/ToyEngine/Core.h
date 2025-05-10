#pragma once

#ifdef TE_PLATFORM_WINDOWS
	#ifdef TE_BUILD_DLL
#define TOYENGINE_API __declspec(dllexport)
	#else
#define TOYENGINE_API __declspec(dllimport)
	#endif
#else
	#error ToyEngine only supports Windows
#endif
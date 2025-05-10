#pragma once
#include "Core.h"

namespace ToyEngine
{ 
	class TOYENGINE_API Application 
	//class __declspec(dllexport) Application
		//engine exports dll
{
	public:
		Application();
		virtual ~Application();

		void Run();
};
	Application* CreateApplication();
	//To be defined in CLIENT
}
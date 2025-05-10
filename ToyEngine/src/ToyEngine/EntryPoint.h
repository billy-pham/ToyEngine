#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern ToyEngine::Application* ToyEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("ToyEngine\n");
	auto app = ToyEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
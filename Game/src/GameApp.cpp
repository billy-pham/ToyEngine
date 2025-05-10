#include <ToyEngine.h>

class Game : public ToyEngine::Application
{
public:
	Game()
	{

	}

	~Game()
	{

	}
};

ToyEngine::Application* ToyEngine::CreateApplication()
{
	return new Game();
}
//namespace ToyEngine
//{
//	__declspec(dllimport) void Print();
//	//Game imports dll 
//}

//void main()
//{
//	ToyEngine::Print(); 
//}
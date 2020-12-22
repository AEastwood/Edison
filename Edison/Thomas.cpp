#include <string>
#include <iostream>
#include "env.cpp"
#include "NetworkHandler.cpp"

using namespace std;
using namespace Core;

class Thomas
{
private:
	static void introduce()
	{
		string fqn = "Booting ";
		std::cout << fqn;
		std::cout << NAME;
		std::cout << " " << VERSION;
		std::cout << endl;
	}

public:
	static void start()
	{
		introduce();
		NetworkHandler::listen();
	}

};


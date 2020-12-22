#include "./Core/Functions.cpp"
#include <string>
#include "env.cpp"

using namespace std;
using namespace Core;

class Thomas
{

private:
	static void sayName()
	{
		string name = NAME;
		string version = VERSION;
		string fqn = "Booting " + name + " " + version;
		Functions::print(fqn);
	}

	static void startListenServer()
	{
		int port = PORT;
		Functions::print("starting listen server on port: " + to_string(port) + ", binded");
	}

public:
	static void start()
	{
		sayName();
		startListenServer();
	}

};


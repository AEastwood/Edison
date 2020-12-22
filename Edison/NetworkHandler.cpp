#include <stdio.h>
#include <iostream>
#include <string>
#include "env.cpp"

using namespace std;

namespace Core {
	class NetworkHandler {

	public:
		static void listen()
		{
			int port = PORT;
			std::cout << "starting listen server on port: " + std::to_string(port) << endl;
		}
	};
};
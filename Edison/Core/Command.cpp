#include <stdio.h>
#include "Functions.cpp"

using namespace Core;

namespace Core {
	class Command {

	public:
		static void handle(string command)
		{
			Functions::clear();
			Functions::print("handling command: " + command);
		}

	};
};
#include <stdio.h>
#include "Functions.cpp"

namespace Core {
	class Command {

	public:
		static void handle(string command)
		{
			Functions::print("handling " + command);
		}

	};
};
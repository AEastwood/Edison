#include "Thomas.cpp"
#include "./Core/Command.cpp"

using namespace std;

int main()
{
	string command;

	Thomas::start();

	while (true) {
		Functions::print("Please enter a command");
		std::cin >> command;
		Command::handle(command);
	}
	
}
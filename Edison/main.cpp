#include "Thomas.cpp"
#include "CommandHandler.cpp"

using namespace Core;
using namespace std;

int main()
{
	string command;
	Thomas::start();

	while (true) {
		std::cout << "Please enter a command: ";
		getline(cin ,command);
		std::cout << CommandHandler::handle(command) << endl;
	}
	
}
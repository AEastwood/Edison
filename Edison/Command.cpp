#include <string>

using namespace std;

class Command {

public:
	string Title = "";
	int Importance = 0;

	Command(string title, int importance)
	{
		Title = title;
		Importance = importance;
	}
};
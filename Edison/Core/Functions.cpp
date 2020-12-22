#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

namespace Core {

	class Functions {

	public:
		// clear console
		static void clear() {
			COORD topLeft = { 0, 0 };
			HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_SCREEN_BUFFER_INFO screen;
			DWORD written;

			GetConsoleScreenBufferInfo(console, &screen);
			FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
			FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE, screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
			SetConsoleCursorPosition(console, topLeft);
		}

		// print to console
		static void print(const string& input)
		{
			std::cout << input << endl;
		}

	};

}

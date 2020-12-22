#include <stdio.h>
#include <iostream>
#include <string>
#include "Command.cpp"

using namespace std;

namespace Core {

	class CommandHandler {

		enum validCommands {
			invalid,
			getLogs,
			sanityCheck,
			selfCheck,
			test,
		};

	private:
		static validCommands resolveOption(string input) {
			if (input == "check") return selfCheck;
			if (input == "logs") return getLogs;
			if (input == "sanity") return sanityCheck;
			if (input == "test") return test;
			return invalid;
		}

	public:

		// placeholder commands and responses
		static string handle(string& input)
		{
			Command command(input, 1);

			switch (resolveOption(input)) {

			case sanityCheck:
				return "all is fine";

			case test:
				return "test is complete";
			}

			return "invalid command";
		}
	};
};
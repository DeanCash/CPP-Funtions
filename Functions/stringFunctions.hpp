#pragma once

#include <iostream>
#include <string>

using std::string; using std::cout; using std::endl;

namespace stringFunctions {
	
	int strlen(string String) {
		int i = 0;
		while (String[i])
			i++;
		return i;
	}

	string ljust(string String, int inputAmount) {
		int stringLength = strlen(String);
		int amount = (inputAmount - stringLength);

		if (inputAmount > 0 && inputAmount <= 100) {
			for (int i = 0; i < amount; i++) {
				String += " ";
			}
			return String;
		} else if (inputAmount <= 0 || inputAmount > 100) {
			cout << "Amount Cannot Be Bigger Than 100 Or Less Than 0!" << endl;
			exit(1);
		} else {
			return String;
		}
	}

	string rjust(string String, int inputAmount) {
		int stringLength = strlen(String);
		int amount = (inputAmount - stringLength);

		string sampleString = "";
		if (inputAmount > 0 && inputAmount <= 100) {
			for (int i = 0; i < amount; i++) {
				sampleString += " ";
			}
			sampleString += String;
			string newString = sampleString;
			return newString;
		}
		else if (inputAmount <= 0 || inputAmount > 100) {
			cout << "Amount Cannot Be Bigger Than 100 Or Less Than 0!" << endl;
			exit(1);
		}
		else {
			return String;
		}
	}
	
}
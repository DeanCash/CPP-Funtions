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

	/* left justify the string - does te exact same thing as
	   the ljust() in python, just takes in an extra arg  */
	string ljust(string String, int inputAmount) {
		int stringLength = strlen(String);
		int amount = (inputAmount - stringLength);

		// de adjust can't be bigger than 200
		if (inputAmount > 0 && inputAmount <= 200) {
			for (int i = 0; i < amount; i++) {
				String += " ";
			}
			return String;
		} else if (inputAmount <= 0 || inputAmount > 200) {
			cout << "Amount Cannot Be Bigger Than 200 Or Less Than 0!" << endl;
			exit(1);
		} else {
			return String;
		}
	}

	/* right justify the string - does te exact same thing as
	   the rjust() in python, just takes in an extra arg   */
	string rjust(string String, int inputAmount) {
		int stringLength = strlen(String);
		int amount = (inputAmount - stringLength);
		string sampleString = "";

		// de adjust can't be bigger than 200
		if (inputAmount > 0 && inputAmount <= 200) {
			for (int i = 0; i < amount; i++) {
				sampleString += " ";
			}
			sampleString += String;
			string newString = sampleString;
			return newString;
		}
		else if (inputAmount <= 0 || inputAmount > 200) {
			cout << "Amount Cannot Be Bigger Than 200 Or Less Than 0!" << endl;
			exit(1);
		}
		else {
			return String;
		}
	}

}
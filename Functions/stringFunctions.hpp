#ifndef stringFunctions_hpp
#define stringFunctions_hpp

#include <iostream>
#include <filesystem>
#include <string>

using std::string; using std::cout; using std::endl;
using std::filesystem::path;

namespace stringFunctions {

	/* left justify the string - does te exact same thing as
	   the ljust() in python, just takes in an extra arg    */
	string ljust(string String, int inputAmount)
	{
		int stringLength = String.length();
		int amount = (inputAmount - stringLength);

		// de adjust can't be bigger than 300
		if (inputAmount > 0 && inputAmount <= 300) {
			for (int i = 0; i < amount; i++) {
				String += " ";
			}
			return String;
		} else if (inputAmount <= 0 || inputAmount > 300) {
			cout << "Amount Cannot Be Bigger Than 300 Or Less Than 0!" << endl;
			return "";;
		} else {
			return String;
		}
	}

	/* right justify the string - does te exact same thing as
	   the rjust() in python, just takes in an extra arg     */
	string rjust(string String, int inputAmount)
	{
		int stringLength = String.length();
		int amount = (inputAmount - stringLength);
		string sampleString = "";

		// de adjust can't be bigger than 300
		if (inputAmount > 0 && inputAmount <= 300) {
			for (int i = 0; i < amount; i++) {
				sampleString += " ";
			}
			sampleString += String;
			string newString = sampleString;
			return newString;
		}
		else if (inputAmount <= 0 || inputAmount > 300) {
			cout << "Amount Cannot Be Bigger Than 300 Or Less Than 0!" << endl;
			return "";;
		}
		else {
			return String;
		}
	}

	/* gives the tail of an inputted path, = what comes at
	   at the end of path, a [file.txt], or [folderName]  */
	string getPathTail (string path)
	{
		if (!filesystem::exists(path)) {
			return "";
		}

		string fileName = path.substr(path.find_last_of("\\") + 1 );
		if ((path.length()) == (fileName.length()))
		{
			fileName = path.substr((path.find_last_of("/") + 1));
			if ((path.length()) == (fileName.length()))
			{
				return "";
			} else return fileName;
		} else return fileName;
		return "";
	}
	/* overload function - so you can pass either a
	   path object, or a string as argument        */
	string getPathTail (path pPath)
	{
		string path = pPath.string();
		if (!filesystem::exists(path)) {
			return "";
		}

		string fileName = path.substr(path.find_last_of("\\") + 1 );
		if ((path.length()) == (fileName.length()))
		{
			fileName = path.substr((path.find_last_of("/") + 1));
			if ((path.length()) == (fileName.length()))
			{
				return "";
			} else return fileName;
		} else return fileName;
		return "";
	}

}

#endif
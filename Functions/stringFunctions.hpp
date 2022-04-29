#ifndef stringFunctions_hpp
#define stringFunctions_hpp

#include <iostream>
#include <filesystem>
#include <string>

using std::string; using std::cout; using std::endl;
using std::filesystem::path;

namespace stringFunctions {
	
	// int strlen(string String)
	// {
	// 	int i = 0;
	// 	while (String[i])
	// 		i++;
	// 	return i;
	// }

	/* left justify the string - does te exact same thing as
	   the ljust() in python, just takes in an extra arg    */
	string ljust(string String, int inputAmount)
	{
		int stringLength = String.length();
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
	   the rjust() in python, just takes in an extra arg     */
	string rjust(string String, int inputAmount)
	{
		int stringLength = String.length();
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

	/* gives the tail of an inputted path, = what comes at
	   at the end of path, a [file.txt], or [folderName]  */
	string getPathTail (string path)
	{
		string fileName = path.substr(path.find_last_of("\\")+1 );
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

		string fileName = path.substr(path.find_last_of("\\")+1 );
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
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	string word; // Word to change
	int character; // Which character to change
	char wordChange; // What to replace the character with
	cout << "Enter a word smaller than 11 characters: ";
	cin >> word;
	cout << "\nWord is " << word << endl;
	for (unsigned int i = 0; i < word.size(); i++) // Show each character 
	{
		cout << "\nCharacter at postion " << i << " is " << word[i];
	}
	cout << "\n\nChoose a number which represents a character in the word (0 = 1st Character): ";
	cin >> character;
	cout << "\nWhat would you like to replace it with?: ";
	cin >> wordChange;

	switch (character)
	{
	case 0:
		word[0] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 1:
		word[1] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 2:
		word[2] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 3:
		word[3] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 4:
		word[4] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 5:
		word[5] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 6:
		word[6] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 7:
		word[7] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 8:
		word[8] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	case 9:
		word[9] = wordChange;
		cout << "\nWord is now " << word << endl;
		break;

	default:
		cout << "\nInvalid Word!" << endl;
		break;
	}
	return 0;
} // Any help on adding longer word edits (not using a switch statement) would be appreciated

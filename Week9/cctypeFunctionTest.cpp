#include <iostream>
#include <cctype>

using namespace std;

main()
{
	char letter;

	cout << "Enter a letter : ";
	cin >> letter;

	if (isalpha(letter))
	{
		if (isupper(letter))
		{ // islower(letter)
			letter = tolower(letter);
		}
		else
		{
			letter = toupper(letter);
		}
	}
	else if (isdigit(letter))
	{
		cout << letter << " is a digit";
	}
	else if (ispunct(letter))
	{
		cout << letter << "is a punctuation " << endl;
	}
	else
		;

	cout << letter << endl;
}
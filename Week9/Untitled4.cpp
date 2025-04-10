#include <iostream>
#include <cstring>

using namespace std;

main()
{
	char s1[50], s2[50] = "Good Luck!", s3[50];

	cout << "Enter a string (S1): ";
	cin.getline(s1, 50); // Happy Holiday!

	// to copy a string to another string
	strcpy(s3, s1);

	cout << "S1 - " << s1 << endl;
	cout << "S2 - " << s2 << endl;
	cout << "S3 - " << s3 << endl;

	//	to copy the first N characters from the source string
	strncpy(s3, s1, 5);
	s3[6] = '\0'; // clear the remaining in existing string

	cout << "S1 - " << s1 << endl;
	cout << "S2 - " << s2 << endl;
	cout << "S3 - " << s3 << endl;

	// merge 2 string ( concatenate )
	// strcat(s1, s2);

	cout << "S1 - " << s1 << endl;
	cout << "S2 - " << s2 << endl;
	// cout << "S3 - " << strncats3 << endl;
	cout << "STRCAT----" << strcat(s1, s2) << endl;

	// string compare

	// if (strcmp(s1, s2) == 0)
	// {
	// 	cout << "both strings are same " << endl;
	// }
	// else
	// 	(strcmp(s1, s2) == 1)
	// 	{
	// 		cout << "S1 is bigger than S2" << trcmp(s1, s2) << endl;
	// 	}
	// else(strcmp(s1, s2) == -1)
	// {
	// 	cout << "S1 is smaller than S2" << trcmp(s1, s2) << endl;
	// }
}
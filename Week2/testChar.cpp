#include <iostream>

using namespace std;

main()
{
	char letter = 'A';
	char courseCode[10] = "DSC1107";
	
	//  \0 -> null character - to indicate the end of the string 
		
	char courseCodeWithDifferentInitialization[10] = {'D','C','S','1','1','0','8','\0'};
	
	
	cout << "\t**********************************\n";
	cout << "\t*\tGrade : "<< letter <<"\t\t *\n";
	cout << "\t*\tCourse Code 1 : "<< courseCode <<"\t *\n";
	cout << "\t*\tCourse Code 2 : "<< courseCodeWithDifferentInitialization <<"\t *\n";
	cout << "\t**********************************\n";
}
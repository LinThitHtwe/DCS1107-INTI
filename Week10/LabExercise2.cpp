#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int Count_Char(char Str[], char letter);

main(){
	char str[50];
	char letter;
	int count;
	 
	cout << "Enter a string : ";
	cin.getline(str,50);
	cout << "Enter a letter : ";
	cin >> letter;
	
	count  = Count_Char(str, letter);
	cout << "Count for the letter "<< letter << " in string " << count ;
}

int Count_Char(char Str[],char letter){
	int length, i, c= 0;
	
	length = strlen(Str);
	
	for(i= 0; i < length ; i++){
		if(Str[i] == letter)
		c++;	
	}
	return c;
}
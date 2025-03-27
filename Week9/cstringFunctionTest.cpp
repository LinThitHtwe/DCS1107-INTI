 #include <iostream>
 #include <cstring>
 
 using namespace std;
 
 main(){
 	char s1[50],s2[50] = "Good Luck!", s3[50];
 	int length;
 	
 	cout << "Enter a string (S1): ";
 	cin.getline(s1, 50); //Happy Holiday!
 	
 	//1. to calculate the length of the string
 	length = strlen(s1); // length = 14
 	
 	cout << "string length - "<< length << endl;
 	
 	//convert entire string to uppercase
 	cout << "uppercase string : " << strupr(s1) << endl;
 	
 	//convert entire stirng to lowercase
 	cout << "Lowercase stirng : " << strlwr(s1) <<endl;
 	
 	cout << s1 <<endl;
 	
 	//reverse entire string
 	cout << "Reversed String : " << strrev(s1) << endl;
 	
 }
/*
Get the user to enter 2 integers. Pass to the function. 
Multiply these 2 integers and display the answer in the main program
*/

#include <iostream>
using namespace std;

int Multiply(int,int);
void DisplayAnswer(int);

main(){
	int firstInt,secondInt,result;
	
	cout << "Enter first integer : ";
	cin >> firstInt;
	cout << "Enter second integer : ";
	cin >> secondInt;
	
	result = Multiply(firstInt, secondInt);
	//cout << "Result -> " << result << endl;
	DisplayAnswer(result);
	cout << "Finally, done !";
}

int Multiply(int x, int y){
	
//	int result = x * y; 
//	return result;
	
	return x * y;
}

void DisplayAnswer(int answer){
	cout << "Your answer = "<< answer << endl;
}
#include <iostream>
using namespace std;

void menu();
bool login();

main(){
	int option = 0;
	bool result;
	do{
		menu();
		cout << "Enter your option : ";
		cin >> option ; 
		
		if(option != 1 && option != 2){
			cout << "\nInvalid Option. Re enter again"<<endl;
		}
		
	}while(option != 1 && option != 2);
	
	cin.ignore(); // to capture the 'enter' command 
	
	switch(option){
		case 1 :
			result = login();
			break;
		case 2 :
			break;
		
		default :
			break;
	}
	
	if(result){
		cout << "Login successfully !" << endl;
	}
	else{
		cout << "Incorrect username or password!" <<endl;
	}
}

void menu(){
	cout << "Options" << endl;
	cout << "---------------------------"<<endl;
	cout << "1 => Login" << endl;
	cout << "2 => Reset Password" << endl;
	cout << "---------------------------"<<endl;	
}

bool login(){
	string defaultUsername = "Test123";
	string defaultPassword = "123";
	
	string usernameInput, passwordInput;
	
	cout << "Enter user name : ";
	getline(cin, usernameInput);
	//cin >> usernameInput;
	cout << "Enter password : ";
	//cin >> passwordInput;
	getline(cin, passwordInput);
	
	if(usernameInput == defaultUsername && passwordInput == defaultPassword){
		return true;
	}
	else{
		return false;
	}	
}
	
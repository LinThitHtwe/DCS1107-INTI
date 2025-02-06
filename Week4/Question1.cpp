 #include <iostream>
 
 using namespace std;
 
 main()
 {
 	int codeInput;
	 
	cout << "Input code : "	;
	cin >> codeInput;
	
	if(codeInput == 100)
		cout << "Normal speed range";
	else if(codeInput == 101)
		cout << "Over-speed warning";
	else if(codeInput == 88)
		cout << "Low oil pressure";
	else if(codeInput == 187)
		cout << "Engine failure";
	else
		cout << "Invalid system code";	
 }
  #include <iostream>
 
 using namespace std;
 
 main()
 {
 	int codeInput;
	string message;
	
	cout << "Input code : "	;
	cin >> codeInput;
	
	switch(codeInput){
		case 100:
			message = "Normal speed range";	
			break;
		case 101:
			message = "Over-speed warning";
			break;
		case 88:
			message = "Low oil pressure";
			break;
		case 187:
			message = "Engine failure";
			break;
		default:
			message = "Invalid system code";
	}

	cout << message << endl;
 }
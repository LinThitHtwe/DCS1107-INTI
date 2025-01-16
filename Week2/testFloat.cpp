 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 main(){
	float price = 2.435325;
	double number = 1.456678;
	
	// rounding up to 2 decimal point
	
	
	cout << "Price : RM" <<fixed<<setprecision(2)<<price<<endl;
	cout << "Number : " <<fixed<<setprecision(3)<<number <<endl;
	
	//-------------------------------
	
	//set all the cout to 2 precision
	cout <<fixed<<setprecision(4);
	cout <<"Price : RM "<<price<<endl;
	cout << "Seperately : " <<fixed<<setprecision(2)<<number <<endl; //this can reset precision
	cout << "Number : " <<number <<endl;

 }
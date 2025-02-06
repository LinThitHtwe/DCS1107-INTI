#include <iostream>
using namespace std;

main(){
	
	float chargeRate = 0.6, overRate = 0.25,totalPrice;
	int miles;
	
	cout << "Enter the miles : ";
	cin >> miles;
	
	if(miles <= 100){
		totalPrice = miles * chargeRate;
	}
	else{
		totalPrice = 60 + ((miles - 100) * overRate);
	}
	
	cout << "Your total price : RM"<< totalPrice <<endl;
}
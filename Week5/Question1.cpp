#include <iostream>
using namespace std;

main(){
	
	int marks, total, count = 1;
	float average;
	
//------------------------------------	
// using for loop 
//	for(int i = 1 ; i <=3 ; i++){
//		cout << "Please Enter the test mark "<< count << " : ";
//		cin >> marks;
//		total += marks;
//	}
//------------------------------------	


//------------------------------------	
// using do while loop
//	do{
//		cout << "Please Enter the test mark "<< count << " : ";
//		cin >> marks;
//		total += marks;
//		count++;
//	}
//	while(count <= 3);
//------------------------------------	
	
	while(count <= 3){
		cout << "Please Enter the test mark "<< count << " : ";
		cin >> marks;
		total += marks;
		count++;
	}

	average = total / 3.0;
	
	cout << "Total marks : " << total << endl;
	cout << "Average marks : "<<average <<endl;
	
	if(average < 50){
		cout << "Failed" << endl;
	}
	else{
		cout << "Passed"<<endl;
	}
}
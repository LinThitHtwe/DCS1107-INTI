#include <iostream>

using namespace std;

main(){
	
	int i,j,x,y;;
	
	float A[5] ,B[5];
	float sumA = 0.0, sumB = 0.0, sumC = 0.0;
	
	cout << "Enter 5 values into Array A "<<endl;
	for(i = 0; i < 5; i++){
		cout << "Enter Array A value "<< i+1 << " : ";
		cin >> A[i];
//		sumA += A[i];
	}
	
	cout << "Enter 5 values into Array B "<<endl;
	for(j = 0; j < 5; j++){
		cout << "Enter Array B value "<< j+1 << " : ";
		cin >> B[j];
	//	sumB += B[j];
	}
	
	for(x =0; x < 5;x++){
		sumA += A[x];
		sumB += B[x];
	}
		
	for(y=0; y <5; y++){
		sumC += A[y] * B[y];
	}
		
	cout << "Sum of Array A : " << sumA<< endl;
	cout << "Sum of Array B : " << sumB << endl;
	cout << "Sum of Array A * Array B : " << sumC << endl;
}
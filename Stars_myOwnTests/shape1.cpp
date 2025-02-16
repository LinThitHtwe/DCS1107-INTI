/*
This code will output the shape below

****
***
**
*

*/


#include <iostream>

using namespace std;

main(){
	
	int count = 4;
	
	for(int i = 1 ; i <= count ; i ++){
		
		for(int j = count-i; j >= 0 ; j--){
			cout << "*";
		}
		cout << endl;
	}
}

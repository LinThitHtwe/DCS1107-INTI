#include <iostream>

using namespace std;

float calculateAverage(float, float, float);

main(){
	float num1, num2, num3;

    cout << "Enter 3 float values: ";
    cin >> num1 >> num2 >> num3;

    float average = calculateAverage(num1, num2, num3);
    cout << "The average is: " << average << endl;

}

float calculateAverage(float a, float b, float c) {
    float sum = a + b + c;
    float product = a * b * c;
    
    cout << "The sum of " << a << ", " << b << ", and " << c << " is " << sum << endl;
    cout << "The product of " << a << ", " << b << ", and " << c << " is " << product << endl;
    
    return sum / 3;
}
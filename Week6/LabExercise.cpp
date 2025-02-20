 #include <iostream>

 using namespace std;

 #define RATE_1 0.05
 #define RATE_2 0.03
 #define RATE_3 0.01
 #define RATE_4 0.00

 main() {

    int age, maritalStatus, securityCode, employeesCount = 10;
    float salary, tax = 0.0;

    do {
       cout << "Enter Security code ( 1 - 9999 ) : ";
       cin >> securityCode;

       if (securityCode < 1 || securityCode > 9999) {
          cout << "You've enter invalid security code. RE-";
       }

    } while (securityCode < 1 || securityCode > 9999);
	
	cout << "----------------------------" << endl;
	
    for (int i = 1; i <= employeesCount; i++) {
       cout << "Employee #" << i << endl;

       do {
          cout << "Enter Salary : ";
          cin >> salary;

          if (salary <= 0) {
             cout << "You've enter invalid salary. RE-";
          }

       } while (salary <= 0);

       do {
          cout << "Enter Age : ";
          cin >> age;

          if (age <= 0) {
             cout << "You've enter invalid age. RE-";
          }

       } while (age <= 0);

       do {
          cout << "Enter Marital Status (1 for single, 2 for married) : ";
          cin >> maritalStatus;

          if (maritalStatus != 1 && maritalStatus != 2) {
             cout << "You've enter invalid marital status. RE-";
          }

       } while (maritalStatus != 1 && maritalStatus != 2);

       switch (maritalStatus) {
       case 1:
          if (age < 30) {
             tax = salary * RATE_3;
          } else {
             tax = salary * RATE_1;
          }
          break;
       case 2:
          if (age < 30) {
             tax = salary * RATE_4;
          } else {
             tax = salary * RATE_2;
          }
          break;
       }
       
       cout << "*** Tax for Employee #"<<i<<" : "<< tax << " RM ***"<<endl;
       cout << "----------------------------" << endl;
    }

 }
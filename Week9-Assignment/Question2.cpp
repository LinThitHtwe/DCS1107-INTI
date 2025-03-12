#include <iostream>
#include <iomanip>
using namespace std;

#define ADULT_RATE 5.00
#define KID_RATE 1.50
#define SENIOR_RATE 3.00

double calculateFee(int, int);

main() {
    int category, numPassengers;
    char choice;
    double finalFee = 0.0;
    
    cout << fixed << setprecision(2); 

    cout << "=====================================" << endl;
    cout << "      TRANSPORT FEE CALCULATION      " << endl;
    cout << "=====================================" << endl;

    do {
        cout << "\nSelect Passenger Category:"<<endl;
        cout << "  1. Adult          - RM " << ADULT_RATE << endl;
        cout << "  2. Kid            - RM " << KID_RATE << endl;
        cout << "  3. Senior Citizen - RM " << SENIOR_RATE << endl;
        
        do {
            cout << "\nEnter your choice (1-3): ";
            cin >> category;

            if (category < 1 || category > 3) {
                cout << "Invalid category! Please enter 1, 2, or 3." << endl;
            }
        } while (category < 1 || category > 3);

        do {
            cout << "Enter the number of passengers: ";
            cin >> numPassengers;

            if (numPassengers < 1) {
                cout << "Invalid number! Must be at least 1." << endl;
            }
        } while (numPassengers < 1);

        double fee = calculateFee(category, numPassengers);
        finalFee += fee;

        cout << "\nTotal for this category: RM " << fee << endl;
        cout << "-------------------------------------" << endl;

        cout << "Would you like to buy more tickets?" << endl;
        cout << "Press 'Y' or 'y' to continue." << endl;
        cout << "Press any other key to exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n=====================================" << endl;
    cout << "  FINAL TOTAL TRANSPORT FEE: RM " << finalFee << endl;
    cout << "=====================================" << endl;

}

double calculateFee(int category, int numPassengers) {
    double rate;

    switch (category) {
        case 1:  
            rate = ADULT_RATE;
            break;
        case 2:  
            rate = KID_RATE;
            break;
        case 3:  
            rate = SENIOR_RATE;
            break;
        default:
            return 0; 
    }

    return rate * numPassengers;
}

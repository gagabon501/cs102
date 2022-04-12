#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    string customerName;
    int customerNumber, unitsConsumed, chunks100, extra;
    float rate, amount, extra_multiplier, chunks100_multiplier;

    cout << "\nAuckland Power - Customer Bill Generator";
    cout << "\n****************************************\n";
    cout << "Enter Customer Name: ";
    cin >> customerName;
    cout << "Customer Number: ";
    cin >> customerNumber;
    cout << "Enter consumed units: ";
    cin >> unitsConsumed;

    chunks100 = unitsConsumed / 100; //get how many chunks of 100 is there

    extra = unitsConsumed - (chunks100 * 100); //get the extra units based on the number of 100 chunks from the total consumed units

    if (chunks100 <= 1){
        chunks100_multiplier = 0.30; //rate applied to the first 100
        extra_multiplier = 0.50; //rate applied to the extra units
    }
    else if (chunks100 > 1 && chunks100 < 3) {
        chunks100_multiplier = 0.30 + 0.50; //rate applied to the first 100, and the second 100
        extra_multiplier = 0.80; //rate applied to the extra units
    }
    else if (chunks100 > 2)
    {
        chunks100_multiplier = 0.30 + 0.50 + 0.80; //rate applied to the first 100, second 100, and the third 100
        extra_multiplier = 1; //rate applied to the extra units
    }

    // Get the total amount to be paid --> which is the rate applied to the extra units from the number 100 chunks plus the factor of (100 * sum of the rates to be applied) --> used factorization here e.g. 100 * (0.80 + 0.50 + 0.30)
    amount = (extra > 0 ? extra * extra_multiplier : 0) + (100 * chunks100_multiplier);

    // Print the output
    cout << "\n\nAuckland Power - Customer Bill";
    cout << "\n********************************\n";
    cout << "\nCustomer Number: " << customerNumber << endl;
    cout << "\nCustomer Name: " << customerName << endl;
    cout << "\nUnits consumed: " << unitsConsumed << endl;
    cout << "\nAmount: " << amount << endl;
    cout << "\n*******************************" << endl;

    return 0;
}



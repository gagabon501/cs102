#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool checkPrime(int n) {
    bool isPrime = true;
    if (n <= 0) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    else
    {
        if( n == 1) {
            return false;
        } else {
            for (int i = 3; i < n; i++) {
                if(n%i == 0 && i != n ) {
                    isPrime = false;
                    break;
                } else {
                    isPrime = true;
                }
            }
            return isPrime;
        }
    }
    
}


int main() {
    int startNum, endNum, totPrime = 0;

    cout << "Enter starting number: ";
    cin >> startNum;
    cout << "Enter final number: ";
    cin >> endNum;

    if(endNum < startNum) {
        cout << "Invalid entry. Final number should be greater than the starting number. Please run the program again.\n";
        return -1;
    }

    cout << "\n\nNumbers divisible by 7 from " << startNum << " to " << endNum;
    cout << "\n************************************\n";
    for (int i = startNum; i <= endNum; i++) {
        if (i%7 == 0 ) {
            cout << i << (i < endNum ? "," : "") ;
        }
    }

    cout << "\n\nPrime Numbers";
    cout << "\n*************\n";
    cout << "Prime List between (" << startNum << " and " << endNum << "): ";

    for (int i = startNum; i <= endNum; i++) {
        if (checkPrime(i)) {
            cout << i << " " ;
            totPrime++;
        }
    }
    cout << "\nTotal number of prime numbers from (" << startNum << " to " << endNum << "): " << totPrime << "\n";

    return 0;
}


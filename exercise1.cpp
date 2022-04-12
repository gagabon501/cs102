#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int num1() {
    // Evaluate the expression: Z = ax + (b-c)(c-d)/y
    int Z, a, b, c, d, x, y;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;
    cout << "Enter c value: ";
    cin >> c;
    cout << "Enter d value: ";
    cin >> d;
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;

    Z = a * x + (b - c) * (c - d) / y;
    
    cout << "Z = " << Z << "\n";
    return Z;
}

void num2() {
    // 2. Write a program to find smallest of three numbers. 
    int a, b, c, smallest;
    string strSmallest;
    cout << "Enter A value: ";
    cin >> a;
    cout << "Enter B value: ";
    cin >> b;
    cout << "Enter C value: ";
    cin >> c;
    if (a < b) {
        smallest = a;
        if (smallest > c) {
            smallest = c;
            strSmallest = "C is smallest";
        }
        else
        {
            strSmallest = "A is smallest";
        }
    } else {
        smallest = b;
        if (smallest > c) {
            smallest = c;
            strSmallest = "C is smallest";
        }
        else
        {
            strSmallest = "B is smallest";
        }
    }
    cout << strSmallest << ": " << smallest <<  "\ncle";
    
}

int num3() {
    // Write a program to find a given number is prime or not. Read a number from user and display as per the output format.
    int n;
    bool isPrime = true;
    cout << "Prime Check\n";
    cout << "***********\n";
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 0) {
        cout << "0 or negative numbers not a valid entry";
        return 0;
    }
    if (n == 2) {
        cout << n << " is a prime number\n";
    }
    else
    {
        if( n == 1) {
            cout << "1 is not a prime number\n";
        } else {
            for (int i = 3; i < n; i++) {
                if(n%i == 0 && i != n ) {
                    isPrime = false;
                    break;
                } else {
                    isPrime = true;
                }
            }
            if (isPrime) {
                cout << n << " is a prime number\n";
            }
            else
            {
                cout << n << " is not a prime number\n";
            }
        }
    }
    return 0;
}

int num4() {
    int n1, n2;
    cout << "\nEven Number Generation";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "Enter starting number:";
    cin >> n1;

    if (n1 == 0) {
        cout << "Please provide not null values";
        return 0;
    }

    cout << "Enter final number:";
    cin >> n2;

    if (n2 == 0) {
        cout << "Please provide not null values";
        return 0;
    }

    cout << "\nEven list between " << n1 << " and " << n2 << ": ";
    for (int i = n1; i <= n2; i++)
    {
        if(i%2 == 0) {
            cout << i;
            if(i < n2) {
                cout << ",";
            } else {
                cout << "\n";
            }
        }
    }
    return 0;
}

int num5() {
   int k = 0;
		char ch = 'a';

		do{  
	   		  cout << ch <<" another string " << "value of k: " << k;
	    		  ch++;
			  k++;	

	                 } while (k < 3); 
    return 0;
}

    int main()
    {

        // num1();
        // num2();
        // num3();
        // num4();
        num5();
        return 0;
    }

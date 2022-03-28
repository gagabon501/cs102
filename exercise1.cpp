#include <iostream>
#include <string>
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

    int main()
    {

        // num1();
        num2();

    }

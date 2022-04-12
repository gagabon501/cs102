#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    float x1, x2;

    cout << "\nEnter a: ";
    cin >> a;

    cout << "\nEnter b: ";
    cin >> b;

    cout << "\nEnter c: ";
    cin >> c;

    x1 = (((b * -1) +  sqrt((b * b) - (4 * a * c)))) / (2 * a);
    x2 = (((b * -1) -  sqrt((b * b) - (4 * a * c)))) / (2 * a);

    if (((b * b) - (4 * a * c)) < 0) {
        cout << "\nRoots are imaginary\n\n";
    } else if (x1 == x2){
        cout << "\nRoots are real and equal\n\n";
    } else if (x1 != x2) {
        cout << "\nRoots are real and unequal\n\n";
    }

    cout << "x1 = " << x1 << ";"
         << "\t "
         << " x2 = " << x2 << endl;
    return 0;
}

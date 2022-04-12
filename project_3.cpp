#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int evenNum = 0, oddNum = 0, randomNum;
    cout << "\nRandom numbers between 10 to 20";
    cout << "\n*******************************\n";

    srand((unsigned) time(NULL)); //seed the rand() function with time() to ensure you do not get the same random number generated
    for (int i = 0; i < 6; i++) {

        randomNum = 10 + (rand() % 11);

        if (randomNum % 2 == 0)
        {
            evenNum++;
        }
        else
        {
            oddNum++;
        }
        cout << randomNum << (i < 5 ? "," : "");
    }
    cout << "\nNumber of even numbers in the list: " << evenNum;
    cout << "\nNumber of odd numbers in the list: " << oddNum << "\n";

    return 0;
}


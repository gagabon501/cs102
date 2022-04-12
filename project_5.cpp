#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
    int guess, randomNum;
    bool guessed = false;

    cout << "\n            Guess Game";
    cout << "\n            **********\n";
    cout << "\nYou will get three chances to guess the number.\n";
    cout << "\nGuess a number in between 1 and 10\n";

    srand((unsigned) time(NULL)); //seed the rand() function with time() to ensure you do not get the same random number generated
    do {
        randomNum = rand() % 10;
    } while (randomNum == 0); //to make sure the number being generated is greater than zero

    for (int i = 1; i <= 3; i++) {
        cout << "\nChoice " << i << ": Enter your answer: ";
        cin >> guess;
        if (guess == randomNum) {
            cout << "\nYou guessed it!";
            guessed = true;
            break;
        }
        else
        {
            cout << "\nSorry wrong guess. Try again!\n";
        }
    }

    if (!guessed) {
        cout << "\nSorry wrong guess. You reached the limit!";
    }

    cout << "\n\nCorrect number: " << randomNum << endl;

    return 0;
}



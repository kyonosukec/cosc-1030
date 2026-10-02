#include <iostream>
using namespace std;

int main() {
    srand(time(0));

    int randnum = rand() % 101;
    int input;
    int guesses = 0;

    do {
        cout << "Guess: ";
        cin >> input;
         if (input > randnum) {
            cout << "Too high, try again" << endl;
        }

        if (input < randnum) {
            cout << "Too low, try again" << endl;
        }

        guesses = guesses + 1;

    } while(input != randnum);

    cout << "Number of guesses took: " << guesses << endl;

    return 0;
}
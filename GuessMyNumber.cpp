#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int tries = 0;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Your goal is to guess my number?" << endl;
    cout << "Please type your first guess: ";
    cin >> guess;
    tries++;
    while (guess != number) {
        if (guess > number) {
            cout << "Too high. Try again: ";
            cin >> guess;
            tries++;
        } else {
            cout << "Too low. Try again: ";
            cin >> guess;
            tries++;
        }
    }
    cout << "Congrats! You Win!" << endl;
    cout << "If you would like to play again type y else type any other charater:";
    char playAgain;
    cin >> playAgain;
    if (playAgain == 'y') {
        main();
    }
    return 0;
}
#include <iostream>
#include "string.h"
#include <sstream>
#include <time.h>
#include "Checker_File.h"

using namespace std;

int guess = 0;
int number = 0;
int cows = 0;
int bulls = 0;
int* pn = &guess;


void checking(int *pn) {
    int count = 0;
    int checkGuess = guess;

    while (checkGuess != 0) {
        checkGuess = checkGuess / 10;
        count++;
    }
    if (count == 4 && (countRepeatingDigits(*pn))) {
        
        BullsAndCowsCounter(guess, number);
        if (guess == number) {
            cout << "You guessed a number!" << endl;
        }
        else {
            cout << "Guess again:" << endl;
            cin >> *pn;
            checking(pn);
        }
    }
    else {
        cout << "Invalid number. Please try again:" << endl;
        cin >> *pn;
        checking(pn);
    }
    
}


int main()
{
    srand(time(NULL));

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    a = (1 + rand() % 8);
    b = (rand() % 9);
    c = (rand() % 9);
    d = rand() % 9;
    while (a == b || a == c || a == d || b == c || b == d || c == d) {
        a = (1 + rand() % 8);
        b = (rand() % 9);
        c = (rand() % 9);
        d = rand() % 9;
    }
    number = a * 1000 + b * 100 + c * 10 + d;
    

    cout << "Number generated. Please guess it by typing 4-digit number:" << endl;
    cin >> guess;
    checking(pn);
    
}

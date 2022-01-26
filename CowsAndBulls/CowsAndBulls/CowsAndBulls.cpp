#include <iostream>
#include "string.h"
#include <sstream>
#include <time.h>
#include "Checker_File.h"
#include <Windows.h>

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

            cout << "Game will close in 5 seconds." << endl;
            Sleep(5000);
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


    cout << "=============================================" << endl;
    cout << "Welcome to Bulls&Cows Game" << endl;
    cout << "Here,computer generates 4-digit number." << endl;
    cout << "Your task is to guess it, using hint like Cows or Bulls." << endl;
    cout << "Cows means that in your number present digit from original number,but not in right place." << endl;
    cout << "Bulls means that in your number present digit from original number and it is on right place." << endl;
    cout << "For example,if original number is 3841,so in your number 9815 will be 1 cow and 1 bull," << endl;
    cout << "but in 3814 will be 2 bull and 2 cows." << endl;
    cout << "Number can't start with 0 or have repeating digits" << endl;
    cout << "Enjoy!" << endl;
    cout << "=============================================" << endl;


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

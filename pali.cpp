#include <iostream>
#include <string>
#include <iterator>
#include "pali.h"
using namespace std;

Palidrome::Palidrome() {

}

Palidrome::Palidrome(string str)
    :phrase(str)
{
}

string Palidrome::iteration() {
    string newPhrase = phrase;
    int index=0;
    strLength = phrase.length();
    cout << "The phrase backwards is: ";
    for (int x = strLength-1; x >= 0; x--) {
        newPhrase[index] = phrase[x];
        index++;
        for (int y = 0; y < strLength; y++) {
            if (phrase[y] != phrase[strLength-y-1]) {
                isPali = true;
            }
        }
    }
    if (isPali) {
        cout << newPhrase << "\nThis isn't a palindrome - the phrase doesn't read the same backward as forward\n";
    }
    else {
        cout << newPhrase << "\nThis is a palindrome - the phrase reads the same backward as forward\n";
    }
}

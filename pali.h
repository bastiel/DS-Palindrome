#ifndef PALI_H
#define PALI_H

#include <iostream>
using namespace std;

class Palidrome {
public:
    Palidrome();
    Palidrome(string str);
    string iteration();

private:
    bool isPali = false;
    string phrase, iter ;
    int strLength;
};

#endif //ASSIGNMENT_2_2_PALI_H

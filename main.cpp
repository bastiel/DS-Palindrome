#include <iostream>
#include <algorithm>
#include <string>
#include "pali.h"
using namespace std;

int main() {

    string str;
    cout << "Enter phrase without any spaces: \n";
    cin >> str;
    Palidrome pali(str);
    pali.iteration();


    return 0;
}

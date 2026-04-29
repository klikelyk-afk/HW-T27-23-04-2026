#include "Passport.h"
#include <iostream>

using namespace std;


Passport::Passport(string s, string n, string sn, string nm, string bd)
    : series(s), number(n), surname(sn), name(nm), birthDate(bd) {
}


void Passport::info() {
    cout << "Passport Series: " << series << " | Number: " << number << endl;
    cout << "Full Name: " << surname << " " << name << endl;
    cout << "Date of Birth: " << birthDate << endl;
}
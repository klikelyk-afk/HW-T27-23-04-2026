#include "ForeignPassport.h"
#include <iostream>

using namespace std;


ForeignPassport::ForeignPassport(string s, string n, string sn, string nm, string bd)
    : Passport(s, n, sn, nm, bd) {
}


void ForeignPassport::addVisa(const Visa& v) {
    visas.push_back(v);
}


void ForeignPassport::info() {
    cout << "\n========== FOREIGN PASSPORT ==========" << endl;
    Passport::info();

    cout << "Visa Records (" << visas.size() << "):" << endl;
    if (visas.empty()) {
        cout << "No visas found." << endl;
    }
    else {
        for (const auto& v : visas) {
            cout << " -> Country: " << v.country
                << " | From: " << v.dateOpen
                << " To: " << v.dateClose << endl;
        }
    }
    cout << "======================================" << endl;
}
#include "ForeignPassport.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    ForeignPassport myForeign("КЕ", "987654", "Петренко", "Олексiй", "15.05.1995");

    Visa schengen("Нiмеччина", "01.01.2026", "01.01.2031");
    Visa ukVisa("Велика Британiя", "10.02.2026", "10.08.2026");

    myForeign.addVisa(schengen);
    myForeign.addVisa(ukVisa);

    myForeign.info();

    return 0;
}
#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>

class ForeignPassport : public Passport {
private:
    std::vector<Visa> visas;

public:
    ForeignPassport(std::string s, std::string n, std::string sn, std::string nm, std::string bd);
    void addVisa(const Visa& v);
    void info() override;
};
#pragma once
#include <string>

class Passport {
protected:
    std::string series;
    std::string number;
    std::string surname;
    std::string name;
    std::string birthDate;
    std::string birthPlace;
    std::string issueDate;
    std::string issuedBy;
    std::string registration;
    std::string patronymic;

public:
    Passport(std::string s, std::string n, std::string sn, std::string nm, std::string bd);
    virtual void info();
    virtual ~Passport() {}
};
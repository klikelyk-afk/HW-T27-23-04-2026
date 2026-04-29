#pragma once
#include <string>

class Visa {
public:
    std::string country;
    std::string dateOpen;
    std::string dateClose;

    Visa(std::string c, std::string open, std::string close);
};
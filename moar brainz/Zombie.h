#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>
class Zombie {
private:
    std::string Name;
public:
    const std::string& getName() const;
    void setName(const std::string& name);
    void announce();
};

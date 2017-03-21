#pragma once
#include <string>

struct Person
{
    std::string name;
    std::string address;
    std::string print_address() const { return address; }    
    std::string print_name() const { return name; }
};

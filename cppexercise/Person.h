#pragma once
#include <string>

class Person
{
    Person() = default;
    Person(const std::string &name, const std::string &address) :name(name), address(address) {}
    std::string name;
    std::string address;
    std::string print_address() const { return address; }    
    std::string print_name() const { return name; }

};

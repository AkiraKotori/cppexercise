#pragma once
#include <string>

class Person
{
public:
    Person() = default;
    Person(const std::string &name, const std::string &address) :name(name), address(address) {}
    std::string get_name() const { return name; }
    std::string get_address() const { return address; }
private:
    std::string name;
    std::string address;


};

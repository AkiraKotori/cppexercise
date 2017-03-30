#pragma once
#include <string>   
#include <iostream>

class Account
{
public:
    Account() = default;
    Account(std::string p) :owner(p) {}
    Account(std::string p, double m) :owner(p), money(m) {}
    const std::string &get_owner() const { return owner; }
    Account &change_owner(const std::string &newp)
    {
        owner = newp;
        return *this;
    }
    static const double get_interestrate() { return interestrate; }
    static void set_interestrate(double);
private:
    std::string owner;
    double money;
    static double interestrate;
};
void Account::set_interestrate(double r) { interestrate = r; }

double Account::interestrate = 0.0;

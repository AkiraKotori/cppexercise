#pragma once
#include <string>
#include <iostream>


class Sales_data
{
public:
    Sales_data() = default;
    Sales_data(const std::string &s) :bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) :bookNo(s), unit_solds(n), revenue(n*p) {}
    Sales_data(std::istream &is) { is >> bookNo >> unit_solds >> revenue; }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &rhs)
    {
        unit_solds += rhs.unit_solds;
        revenue += rhs.revenue;
        return *this;
    }
private:
    double avg_price() const { return revenue / unit_solds; }
    std::string bookNo;
    unsigned unit_solds = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);



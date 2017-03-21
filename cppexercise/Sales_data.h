#pragma once
#include <string>
#include <iostream>


struct Sales_data
{
    std::string bookNo;
    unsigned unit_solds;
    double revenue = 0.0;
    std::string isbn() const { return bookNo; }
    Sales_data &combine(Sales_data &rhs)
    {
        unit_solds += rhs.unit_solds;
        revenue += rhs.revenue;
        return *this;
    }
    double avg_price() const { return revenue / unit_solds; }

};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);


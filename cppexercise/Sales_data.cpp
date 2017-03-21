#include "Sales_data.h"

using namespace std;

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.unit_solds += rhs.unit_solds;
    sum.revenue += rhs.revenue;
    return sum;
}

istream &read(istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.unit_solds >> item.revenue;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << "bookNo:" << item.bookNo << " unit_solds:" << item.unit_solds 
        << " revenue:" << item.revenue;
    return os;
}
#include "Sales_data.h"

using namespace std;

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;

}

istream &read(istream &is, Sales_data &item)
{
    item = Sales_data(is);
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << "bookNo:" << item.bookNo << " unit_solds:" << item.unit_solds 
        << " revenue:" << item.revenue;
    return os;
}
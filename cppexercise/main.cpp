#include "Sales_data.h"

using namespace std;

void main()
{
    Sales_data total;
    if (read(cin,total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (total.isbn() == trans.isbn())
                total = add(total, trans);
            else
            {
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
        return;
    }
    else { cout << "No data?" << endl; }
}


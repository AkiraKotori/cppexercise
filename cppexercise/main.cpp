#include "Sales_data.h"
#include "Person.h"

using namespace std;

void main()
{
    if (cin)
    {
        Sales_data total(cin);
        while (cin)
        {
            Sales_data trans(cin);
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
        cout << "No data?!" << endl;
}



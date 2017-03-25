#include <string>
#include "Screen.h"
#include <iostream>


using namespace std;

void main()
{
    Screen myscreen(5, 5, 'x');
    myscreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myscreen.display(cout);
    cout << "\n";



}
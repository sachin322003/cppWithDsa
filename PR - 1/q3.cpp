#include <iostream>
using namespace std;

main()
{
    float unit, total = 0;

    cout << "Enter the Electricity Unit : ";
    cin >> unit;

    if (unit <= 50)
    {
        total = unit * 0.50;
    }
    else if (unit <= 150)
    {
        total = 50 * 0.50 + (unit - 50) * 0.75;
    }
    else if (unit <= 250)
    {
        total = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    }
    else
    {
        total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    float additional = total * 0.20;
    total += additional;

    cout << endl
         << unit << " Units , Total Charges = " << total << endl;
}
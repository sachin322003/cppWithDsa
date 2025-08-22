#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    if (num > 0)
    {
        cout << num << "  Positive number" << endl;
    }
    else if (num == 0) {
        cout << num << " Neutral number" << endl;
    }
    else{
        cout << num << " Negative number" << endl;
    }
}
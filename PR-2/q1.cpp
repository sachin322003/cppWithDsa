#include <iostream>
using namespace std;

main()
{
    int n, a = 1;

    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a += i;
    }
}
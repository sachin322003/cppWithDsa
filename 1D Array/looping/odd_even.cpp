#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number :" ;
    cin >> n;

    int a = 1;

    while (a <= n)
    {
        if(a % 2 == 0)
        {
            cout << a <<"\t" ;
        }
        a++ ;
    }
    

}
#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number :" ;
    cin >> n;

    int a = 1 ;

    while (a <= 10)
    {
        cout << n <<" * " << a <<" = " << n*a <<endl ;
        a++ ;
    }
    
}
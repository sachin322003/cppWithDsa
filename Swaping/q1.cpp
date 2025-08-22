#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout <<"enter first number :" ;
    cin >> a; //10
    cout <<"enter second number :" ;
    cin >> b; //20

    cout << "A\t :" << a <<endl;
    cout <<"B\t :" << b <<endl;

    //using third variable

    int c = a ;  // c=10
        a = b ; // a=20
        b = c ; // b=10

        cout << endl << "A\t :" << a <<endl;
        cout <<"B\t :" << b <<endl;
}
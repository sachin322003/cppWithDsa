#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number :" ;
    cin >> n;
    
    int a = 1;
    // int sum = 0 ;   
    int sum = 1 ;

    while (a <= n)
    {
        // sum = sum + a;
         sum *= a ;   //fectorial number print hoga ise
        a++ ;
    }
    cout <<"sum :" << sum << endl ; 
      
}
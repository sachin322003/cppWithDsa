#include<iostream>
using namespace std;
main()
{
    int a,b;

    cout <<"enter the first number :" <<endl;
    cin >> a;  //10
    cout <<"enter the second number :" <<endl;
    cin >> b;   //20

    cout <<"A\t :" <<a <<endl;
    cout <<"B\t :" <<b <<endl;

    //using without third variable
    //  a= a+b ; //10+20 a=30           
    //  b= a-b ; //30-20 b=10  
    //  a= a-b ; //30-10 a=20 
    
    a= a*b ; // 10*20 a=200
    b= a/b ; // 200/20 b=10
    a= a/b ; // 200/10 a=20

     cout <<endl <<"A\t :" <<a <<endl;
     cout <<"B\t :" <<b <<endl;
}
#include<iostream>
using namespace std;

class x{
public:
    int a,b,c;
};

class y : public x {

public:
    // setter
    void setsumdata(){
        cout <<"Enter your first number :";
        cin >> a;
        cout <<"Enter your second number:";
        cin >> b;
     cout <<"Enter your third number :";
        cin >> c;

        cout <<endl <<endl;

    }

    // getter

    int sumofcubs;
    void getsumdata(){

        sumofcubs =(a*a*a) + (b*b*b) + (c*c*c);
        
        

        cout << "sum of alls cubs :" << sumofcubs  <<endl;
    }

};
#include<iostream>
using namespace std;

main() {
    int num;
    cout << "Enter the Number : ";
    cin >> num;

    if(num % 2 == 0) {
        if(num % 5 == 0) {
            cout << num << " Number is Even & Divisible by 5.";
        }
        else{
            cout << num << " Number is Even & Not Divisible by 5.";
        }
    }
    else{
        if(num % 5 == 0) {
            cout << num << " Number is Odd & Divisible by 5.";
        }
        else{
            cout << num << " Number is Odd & Not Divisible by 5.";
        }
    }
    
}
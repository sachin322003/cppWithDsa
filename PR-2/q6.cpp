#include <iostream>
using namespace std;

main() {
    int a, count = 0;

    cout << "Enter the Number : ";
    cin >> a;

    while(a != 0){
        count++;
        a = a / 10;
    }

    cout << "The Length is : " << count;
}

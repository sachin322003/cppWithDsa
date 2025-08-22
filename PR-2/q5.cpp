#include <iostream>
using namespace std;

 main()
{
    char prisentChar = 'a';

    do {
        cout << prisentChar << endl;
        prisentChar += 4;
    } while (prisentChar <= 'z');
}
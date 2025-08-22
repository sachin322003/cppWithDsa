#include<iostream>
using namespace std;
main()
{
    int size;
    
    cout <<"enter the elemets :";
    cin >> size;

    int a [size];

    cout << endl <<"Array Input" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter a[" << i <<" ] :";
        cin >> a[i];
    }
    
    

    int n;
 do
 {


    cout <<endl 
        <<endl 
        <<"CRUD Operation" <<endl;

    cout <<"Press 1 for Insert" << endl;
    cout <<"Press 2 for Push" << endl;
    cout <<"Press 3 for Fetch" << endl;
    cout <<"Press 4 for Update" << endl;
    cout <<"Press 5 for Delete" << endl;
    cout <<"Press 6 for Pop" << endl;
    cout <<"Press 0 for Exit" << endl;

    
    cin >> n;

    switch (n)
    {
    case 1:
        system("cls");
        cout << endl << "INSERT";
        break;

         case 2:
        system("cls");
        cout << endl << "PUSH";
        break;

         case 3:
        system("cls");
        cout << endl << "FETCH";
        break;

         case 4:
        system("cls");
        cout << endl << "UPDATE";
        break;

         case 5:
        system("cls");
        cout << endl << "DELETE";
        break;

         case 6:
        system("cls");
        cout << endl << "POP";
        break;

         case 0:
        system("cls");
        cout << endl << "EXIT";
        break;

        default:
         system("cls");
         cout << endl <<"INVELID CHOICE";

     }
 } while (n != 0);

}
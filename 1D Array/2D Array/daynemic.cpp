#include<iostream>
using namespace std;

main()
{
    int row, col;

    cout <<"Enter the row :" ;
    cin >> row;

    cout <<"Enter column :" ;
    cin >> col;

    int a[row][col];

    cout << endl << " Array input : " <<endl ;

    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "ENTER a[" << i << "][" << j << "] : " ;
            cin >> a[i][j];
        }
        cout << endl;
        
    }

     int sum = 0;

    cout << endl << " Array output : " <<endl ;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << a[i][j] << " " ;
            sum += a[i][j];
        }
        cout << endl;
    }

    cout<< endl 
        <<endl
        << "sum :" << sum <<endl <<endl;

        cout<< endl 
        <<endl
        << "AVG :" <<endl << (float) sum / (row * col) <<endl <<endl;

}
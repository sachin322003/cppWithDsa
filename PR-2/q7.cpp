#include <iostream>
using namespace std;

main()

{       
	int n,FNum,LNum;

	cout <<"enter your number:";
	cin>>n;

	LNum=n%10;

	while(n > 9)
	{
		n=n/10;
	}
	FNum=n;

	n = FNum+LNum;

	cout << FNum << " + " << LNum << " = " << n << endl;



}
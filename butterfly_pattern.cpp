#include <iostream>
using namespace std;
main()
{
	int n,i,j,s;
	cout << "enter the row  number : ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << "*";
		}
		s=2*n-2*i;
		for(j=1;j<=s;j++)
		{
			cout <<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout <<"\n";
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout << "*";
		}
		s=2*n-2*i;
		for(j=1;j<=s;j++)
		{
			cout <<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout <<endl;
}
	return 0;

}

#include <iostream>
using namespace std;
main()
{
	int n,i,j,s=0;
	cout << "enter the limit : ";
	cin >> n;
	for (i=1;i<=n;i++)
	{
		s=n-i;
		for(j=1;j<=s;j++)
		{
			cout <<" ";
		}
		for (j=1;j<=i;j++)
		{
			cout<< j<<" ";
		}
		cout <<endl;
	}
	return 0;
}

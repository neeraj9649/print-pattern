#include <iostream>
using namespace std;
main()
{
	int n,i,j;
	cout <<"enter the limit : ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			cout << j<<" ";
		}
		cout <<endl;
	}
}

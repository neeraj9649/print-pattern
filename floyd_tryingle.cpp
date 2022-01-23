#include <iostream>
using namespace std;
main()
{
	int n,i,j,c=1;
	cout << "enter the limit : ";
	cin >>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << c<<" ";
			c++;
		}
		cout << "\n";
	}
	return 0;
}

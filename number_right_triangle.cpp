#include <iostream>
using namespace std;
main()
{
	int n,i,j;
	cout <<"enter the number limit : "<<endl;
	cin >>n;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout <<i;
		}
		cout <<"\n";
	}
	
}

#include<iostream>
using namespace std;
main()
{
	int i,j,r,c;
	cout <<"enter the no of row  : "<<endl;
	cin >> r;
	cout <<"\n enter the no of column : "<<endl;
	cin >> c;
	for (i=1;i<=r;i++)
	{
		for (j=1;j<=c;j++)
		{
			if(i==1 || i==r)
			cout << "*"<<" ";
			else if(j==1 ||j==c)
			cout << "*" << " ";
			else
			cout << " " <<" ";
			
		}
		cout << endl;
	}
	return 0;
}

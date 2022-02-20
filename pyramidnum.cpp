#include <iostream>
using namespace std;
main()
{
	int n,i,j,s=0,p;
	cout << "enter the limit : ";
	cin >> n;
	for (i=0;i<=n;i++)
	{
        p=i;
		s=n-i;
		for(j=1;j<=s;j++)
		{
			cout <<"   ";
		}
		for (j=i;j>=0;j--)
		{
			cout<<"  "<< j;
		}
        if(i!=0){
        for(j=1;j<i+1;j++){
            cout<<"  "<<j<<" ";
        }
        }
		cout <<endl;
	}

	return 0;
}
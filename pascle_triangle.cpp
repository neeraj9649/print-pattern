#include <iostream>
using namespace std;
main()
{
    int fact(int);
    int r;
    cout <<"enter how many rows you want";
    cin>>r;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int fact(int p)
{
    int fac=1;
        for(int q=2;q<=p;q++){
            fac*=q;
        }
        return fac;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[3][3],product=1;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            product=product * (a[i][j]) * (b[i][j]);
        }
    }
    cout<<product<<endl;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][2];
    int tran[2][2];
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            tran[j][i]=a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<tran[i][j]<<"\t";
        }
        cout<<endl;
    }

}
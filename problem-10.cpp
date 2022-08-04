#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0,max=0,row=0;
    for(int i=0;i<=2;i++)
    {
        count=0;
        for(int j=0;j<=2;j++)
        {
            if(a[i][j]==1)
            count++;
        }
        if(count>max)
        {
            max=count;
            row=i;
        }
    }
    cout<<row<<" row contains "<<max<<" numbers of zero"<<endl;
}
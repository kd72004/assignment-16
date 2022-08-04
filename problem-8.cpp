#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if(i<j)
            {
                cout<<a[i][j]<<"  ";
            }
            else 
            {
                cout<<"   ";
            }
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    int count = 0;
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
            if (a[i][j] == 0)
                count++;
        }
    }
    if (count > 4)
        cout << "The given matrix is sparse matrix. \n";
    else
        cout << "The given matrix is not a sparse matrix.\n";
    cout << count << " number of zeros in the matrix.\n";
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        char grid[105][105];
        int col;
        cin >> col;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }
        int count = 1;
        for (int k = 0; k < col; k++)
        {
            char first = grid[0][k];
            char second = grid[1][k];
            if (first == 'G')
            {
                first = 'B';
            }
            if (second == 'G')
            {
                second = 'B';
            }
            if (first != second)
            {
                count =0;
                break;
            }
        }
        if(count ==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
}

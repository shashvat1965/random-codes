#include <bits/stdc++.h>

using namespace std;
int main()
{
    int lightsArr[3][3];
    int inputArr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> inputArr[i];
    }
    for (int j = 0; j < 9; j++)
    {
        if (inputArr[j] % 2 == 1)
        {
            int column = (j % 3);
            int row = (j-(column*3));
            lightsArr[column][row] = (lightsArr[column][row] == 0) ? 1 : 0;
        }
    }
    for(int i = 0; i < 3;i ++){
        for(int j = 0; j < 3; j++){
            cout << lightsArr[i][j] << " " ;
        }
    }
}
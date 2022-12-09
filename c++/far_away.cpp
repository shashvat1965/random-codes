#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0){
        int n;
        int m;
        cin >> n;
        cin >> m;
        int a[n];
        int x = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            int y = floor(m/2);
            if(a[i]>y){
                x = x + abs((a[i]-1));
            }else{
                x = x + abs(m-a[i]);
            }

        }
        cout << x << endl;
    }
}
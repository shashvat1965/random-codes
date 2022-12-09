#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int f[n];
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            f[i]=arr[i];
        }
        int k = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + k);
        for(int l = 0; l<n; l++){
            if(arr[n-1]==f[l]){
                cout << l+1 << "\n";
                break;
            }
        }

    }
}
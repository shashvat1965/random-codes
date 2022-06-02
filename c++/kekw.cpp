#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-->0){
        int a;
        int b;
        int n;
        int k[n];
        cin >> n;
        cin >> a;
        cin >> b;
        if(abs(a-b)>n-2){
            cout << -1 << "\n";
            continue;
        }
        for(int i=0;i<n/2;i++){
            k[i]=a+i;
        }
        for(int i=n/2;i<n;i++){
            k[i]=b-i;
        }
        for(int i=0;i<n;i++){
            cout << k[i] << " ";
        }
        }
        return 0;
    }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-->0){
        long long int k;
        long long int x;
        cin >> k;
        cin >> x;
        long long int j= pow(k,2);
        if(j<x){
            cout << (2*k)-1 << "\n";
            continue;
        }
        for(long long int i=0;i<k+1;i++){
            x=x-i;
            if(x<=0){
                cout << i << "\n";
                break;
            }
        }
        if(x>0){
           for(long long int i=k;i>0;i--){
            x=x-i;
            if(x<=0){
                cout << i << "\n";
                break;
            }
        }
        }
        }
    return 0;
}

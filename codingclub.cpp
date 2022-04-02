#include <bits/stdc++.h>
using namespace std;
 
int bs(long long int x[],int ll,int ul,long long int y){
    int f=0;
    if(ul>=ll){
        int k= (ul+ll)/2 ;
        
        if(x[k]==y){
            return ul-k+1;
        }
        if(x[k]>y){
            int f=k;
            return bs(x,ll,k-1,y);
        }
        if(x[k]<y){
            return bs(x,k+1,ul,y);
        }
    }
    else{
        return f;
    }
}
 
 
int main(){
    long long int n;
    long long int x;
    cin >> n;
    cin >> x;
    int k=0;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(long long int i=0;i<n;i++){
        long long int y = (arr[i]+x);
        k = k + bs(arr,0,n-1,y);
        cout << k << endl;
    }
    cout << k;
}
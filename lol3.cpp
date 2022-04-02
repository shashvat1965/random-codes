#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[6]={1,2,4,5,6,7};
	int l=0;
	int r= sizeof(arr);
	int n;
	cin >> n;
	if(r>=l){
		int mid = (r+l)/2;
		int i=1;
	while(i!=0){
		if(arr[mid]<n){
			l=mid+1;
		}
		if(arr[mid]>n){
			r=mid-1;
		}
		if(arr[mid]==n){
			i=0;
			cout << mid;
		}
	if(r<l){
		cout << "number not in the array" ;
		}
	} 
}
return 0;
}

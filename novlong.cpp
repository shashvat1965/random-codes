#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		int x=0;
		int y=0;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]%2==0){
				x=x+1;
			}
			else{
				y=y+1;
			}
		} 
		if(y%2==0 && y>0){
			cout << y/2 << "\n" ;
		}
		else{
			cout << (y-1)/2 << "\n" ;
		}
		
	}	

	return 0;
}

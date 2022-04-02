#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int i=0;i<n; i++){
		cin >> a[i];
	}
	int l;
	cin >>l;
	int r;
	cin >>r;
	int b[r-l+1];
	for(int j=l;j<r+1;j++){
		b[j-l]=a[j];
		cout << b[j-l];
	}
}

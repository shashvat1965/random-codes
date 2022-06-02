#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
	int n;
	int g=0;
	cin >>n;
	int a[n];
	for(int i=0;i<n; i++){
		cin >> a[i];
	}
	for(int p=0;p<n;p++){
		cout << a[p];
	}
	cout << "" <<endl;
	for(int l=0;l<n;l++){
		cout << "l is "<< l <<endl;
		for(int r=l;r<n;r++){
			int b[r-l+1];
			cout<< "r is " << r << endl;
			if(r==l){
				if(a[r]=r+1 && a[r]==1){
					g=g+1;
					cout << "g is " << g << endl;
				}
			}
			else{
				for(int k=l;k<r+1;k++){
					cout << "k is "<< k << endl;
					if(a[k]==k+1){
						g=g+1;
						cout << "g is " << g << endl;
				}
			}
		}
	}
		}
		cout << "final g is " << g <<endl;
	
}
return 0;
}


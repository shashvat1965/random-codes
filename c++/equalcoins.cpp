#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		int k;
		cin >> k;
		int l= floor(log10(n)+1);
		int a[l];
		for(int i=0;i<l;i++){
			a[l-i-1]=n%10;
			n=floor(n/10);
		}
		sort(a,a+l);
		for(int i=0;i<k;i++){
			a[0]=a[0]+1;
			sort(a,a+l);
		}
		int d=1;
		for(int i=0;i<l;i++){
			d=d*a[i];
		}
		cout << d << "\n";
	}
	return 0;
	}
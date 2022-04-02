#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long long int a;
		unsigned long long int b;
		cin >> a;
		cin >> b;
		if(max(a,b)>=4*min(a,b)){
			cout << min(a,b) << "\n";
		}
		else{
			unsigned long long int k=0;
			int i=1;
			while(i!=0){
				if(min(a,b)<1 || max(a,b)<4){
					if(a+b>=5){
						cout << k+1 << "\n";
						i=0;
					}
					else{
						cout << k << "\n";
						i=0;
					}
				}
				else if(a>=b){
					a=a-4;
					b=b-1;
					k=k+1;
				}
				else if(b>a){
					b=b-4;
					a=a-1;
					k=k+1;
				}
			}
		}
	}
	return 0;	
}
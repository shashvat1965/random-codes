#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n;
	int h=0;
	while(n--){
		int a[3];
		for(int i=0;i<3;i++){
			cin >> a[i];
		}
		int k=0;
		for(int j=0;j<3;j++){
			if(a[j]==1){
				k=k+1;
			}
		}
		if(k>1){
			h=h+1;
		}

	}
	cout << h << "\n";


	return 0;
}
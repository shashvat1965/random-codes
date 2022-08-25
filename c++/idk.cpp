#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-->0){
	    int w,x,y,z;
	    cin >> w;
		cin >> x;
		cin >> y;
		cin >> z;
	    if(w == (x+y+z) || w == (x+y) || w == (y+z) || w == (x+z) || w == x || w == y || w==z){
	        cout << "YES" << "\n";
	    }
	    else{
	        cout << "NO" << "\n";
	    }
	}
}

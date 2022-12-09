#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-->0){
        int c[3];
        int f = 0;
        for(int i = 0; i < 3; i++){
            cin >> c[i];
            if(c[i]>0){
                f++;
            }
        }
        sort(c, c + 3, greater<int>());
        for(int i = 0; i < 3; i++){
            if(c[i]<=1){
                    continue;
            }
            if(i==2){
                break;
            }
            for(int j = i + 1; j < 3; j++){
                if(c[j]<=1){
                    continue;
                }
                if(c[i]<=1){
                    continue;
                }
                c[j]--;
                c[i]--;
                f++;
            }
        }
        cout << f << endl;
    }
}
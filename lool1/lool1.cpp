#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;


int main(){
    int t;
    cout << "how many times do you want to play" <<endl;
    cin >> t;
    while(t-->0){
        srand(time(0));
        int a= rand()%9000+1000;
        string y= to_string(a);
        int g =0;
        while(a>0){
            cout << "guess your number" << endl;
            int n;
            int m[4]={0,0,0,0};
            int d[4]={0,0,0,0};
            int bulls=0;
            int cows=0;
            cin >> n;
            g=g+1;
            if(n<1000 || n>9999){
                cout << "invalid input" <<endl;
                continue;
            }
            string x= to_string(n);
            for(int i=0;i<4;i=i+1){
                int j=i;
                if(y[i]==x[j]){
                    m[i]=1;
                    d[i]=1;
                    bulls= bulls+1;
                }


            }
            for(int s=0;s<4;s=s+1){
                for(int t=0;t<4;t=t+1){
                    if(y[s]==x[t] && s!=t && d[s]==0 && m[t]==0){
                        cows=cows+1;
                        m[t]=1;
                        d[s]=1;

                    }
                }
            }

                cout << "cows: " << cows << " bulls: " << bulls << endl;
                if(bulls==4){
                    cout << "correct number" << endl;
                    cout << "Number of tries: " << g << endl;
                    break;
                }
            }
    }
}






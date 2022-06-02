#include <stdio.h>

int main(){   
    int i, a[3] = {0,1,2};
    for(i = 0; i<4; i++){
        a[a[a[3-i]]] = i-1;
    }
    for(i = 0; i<4; i++){
        printf("%d", a[i]);
    }
}
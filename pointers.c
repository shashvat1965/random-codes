#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
int temp = *x;
*x = *y;
*y = temp;
}

int main(){
int a = 10, b = 20;
printf("Before Swapping %d %d\n", a, b);
swap(&a, &b);
printf("After Swapping %d %d\n", a, b);
return 0;
}


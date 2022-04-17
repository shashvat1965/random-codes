#include <stdio.h>
#include <stdlib.h>

int main() {

int a=5;
int * ptr;
ptr = &a;
int * q = &ptr;
printf("%p\n", ptr);
printf("%p\n", *q);
printf("%p\n", a);
printf("%d\n", a);

}
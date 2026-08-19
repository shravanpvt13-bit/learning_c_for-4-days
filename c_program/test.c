#include<stdio.h>
int main(){
    int a =10;
    int b=34;
    int temp;
    printf("Before swapping: a=%d, b=%d\n", a, b);
    int *p;
    int *q;
    p=&a;
    q=&b;
    a=*q;
    b=*p;
    printf("After swapping: a=%d, b=%d\n", a, b);
}
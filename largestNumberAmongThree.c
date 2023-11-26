#include<stdio.h>

void main(){
    int a, b, c;
    a = 12, b = 32, c = 23;

    if(a>b && a>c){
        printf("%d is largest", a);
    }else if (b > a && b > c)
    {
        printf("%d is largest", b);
    }else
    {
        printf("%d is largest", c);
    }

}
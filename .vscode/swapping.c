#include<stdio.h>
int main(){
    int a = 12, b = 30;
    printf("Numbers are a = %d, b =  %d", a, b);
    printf("\nAfter swapping the numbers are : -\n");
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d", a, b);
    return 0;
}
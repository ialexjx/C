#include<stdio.h>
int main(){
    int a[] = {12,32,14,54,90};
    int i, sum = 0;
    int arraySize = sizeof(a) / sizeof(a[0]);
    printf("%d", arraySize);

    for(i = 0; i<arraySize; i++){
        sum = sum + a[i];
    }
    printf("sum of the array is :- %d", sum);
    return 0;
}
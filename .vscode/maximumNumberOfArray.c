#include<stdio.h>
int main(){
int a[] = {12,32,14,54,90};
    int arraySize = sizeof(a) / sizeof(a[0]);
    int i, sum = 0, max =  a[2];
    for(i =0 ; i<arraySize; i++){
        if (a[i] > max){
           max = a[i];
        }
    }
    printf("The max number of the array is %d", max);
    return 0;
}
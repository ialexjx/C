#include<stdio.h>
int main(){
    int num = 15;
    printf("the number is %d", num);
    if(num % 2 == 0){
        printf("\nTHe number is not odd");
    }else{
        printf("\nthe number is odd");
    }
}
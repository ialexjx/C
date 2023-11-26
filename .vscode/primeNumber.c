#include<stdio.h>
void main(){
    int num, i, count;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("The number is %d", num);
    for(i = 1; i<=num; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("your number is prime");
    }else{
        printf("number is not primr");
    }
    

}
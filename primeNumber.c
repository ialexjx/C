#include<stdio.h>

int main(){
    int number, count = 0, i;
    printf("Enter your number which you want to check prime or not\n");
    scanf("%d", &number);
    printf("Your number is :- %d\n", number);

    for (i = 1; i <= number; i++)
    {
        if(number % i == 0){
            count ++;
        }
    }
    if(count == 2){
        printf("Number is prime");
    }else{
        printf("Number is not prime");
    }

    return 0;
}
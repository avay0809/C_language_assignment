//Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("The given number is an even number."); 
    }
    else{
        printf("The given number is an odd number.");
    }

    return 0;
}
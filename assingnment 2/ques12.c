//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>

int main(){
    float num,r;
    printf("Enter the amount:");
    scanf("%f",&num);
    r=num*76.23;
    printf("The amount in USD is %f",r);
    return 0;
}
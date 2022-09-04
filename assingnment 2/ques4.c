//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping , first number is %d\n",a);
    printf("After swapping , second number is %d\n",b);
    return 0;
}
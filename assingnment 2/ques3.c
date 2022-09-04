//Write a program to swap values of two int variables

#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping , first number is %d\n",a);
    printf("After swapping , second number is %d\n",b);
    return 0;
}
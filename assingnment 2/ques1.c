//Write a program to print unit digit of a given number

#include<stdio.h>

int main(){
    int n,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    rem=n%10;
    printf("%d is the unit digit.",rem);
    return 0;
}
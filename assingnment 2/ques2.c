//Write a program to print a given number without its last digit.

#include<stdio.h>

int main(){
    int num,digit;
    printf("Entere the number:");
    scanf("%d",&num);
    digit = num/10;
    printf("Number without last digit=%d",digit);
    return 0;
}




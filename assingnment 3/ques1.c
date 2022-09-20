//Write a program to check whether a given number is positive or non-positive.


#include<stdio.h>

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>0)
        printf("positive");
    
    if(a<=0)
       printf("Non positive");

    return 0;
}
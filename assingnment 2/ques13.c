//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>

int main(){
      int rem,x;
    printf("Enter the number:");
    scanf("%d",&x);

    rem=x%10;
    x=x/10;
    x=rem*100+x;

    printf("The number after rotate is %d",x);
    return 0;
}
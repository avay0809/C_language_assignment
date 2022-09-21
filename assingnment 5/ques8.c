//Write a program to print squares
// of the first N natural numbers.

#include<stdio.h>

int main()
{
    int n,i,t;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        t=i*i;
        printf("The square of the %d numbers is %d\n",i,t);
    }
    
    
    return 0;
}
//Write a program to print cubes of the first N natural numbers



#include<stdio.h>

int main()
{
    int n,i,t;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        t=i*i*i;
        printf("The cube of the  %d  numbers is %d\n",i,t);
    }
    
    
    return 0;
}
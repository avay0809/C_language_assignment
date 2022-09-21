//Write a program to print the first N 
//even natural numbers in reverse order.


#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the first even natural number:");
    scanf("%d",&n);
    printf("The first N even natural numbers in reverse order is\n");

    for(i=n;i>=1;i--)
    {
        printf("%d\n",2*i);
    }
    
    return 0;
}
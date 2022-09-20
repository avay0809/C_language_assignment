//Write a program to print squares of the first 10 natural numbers

#include<stdio.h>

int main(){
    int n,i;
    
    for(i=0;i<=10;i++)
    {
        n=i*i;
        printf("The square of the first 10 natural numbers is %d\n",n);
    }
    return 0;
}
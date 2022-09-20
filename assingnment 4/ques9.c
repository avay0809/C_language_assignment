//Write a program to print cubes 
//of the first 10 natural numbers


#include<stdio.h>

int main(){
    int n,i;
    
    for(i=0;i<=10;i++)
    {
        n=i*i*i;
        printf("The cube of the first 10 natural numbers is %d\n",n);
    }
    return 0;
}
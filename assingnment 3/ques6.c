//Write a program to print greater between two numbers. Print one number of both are the same.


#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the two number:\n");
    scanf("%d and %d",&a,&b);
    if(a>b)
    {
        printf("The Number %d is greater",a);
    }
    else
    {
        printf("Both are same 0");
    }
      
    return 0;
}
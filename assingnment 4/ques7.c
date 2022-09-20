//Write a program to print the 
//first 10 even natural numbers in reverse order



#include<stdio.h>

int main(){
    int i=10;
    printf("The First 10 even natural number in reverse order are\n");

    for(i=10;i>=1;i--)
    {
        printf("%d\n",2*i);
    }


    return 0;
}
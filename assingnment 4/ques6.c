//Write a program to print the first 10 even natural numbers


#include<stdio.h>

int main(){
    int i=1;
    printf("The First 10 even natural number are\n");

    for(i=1;i<=10;i++)
    {
        printf("%d\n",2*i);
    }


    return 0;
}
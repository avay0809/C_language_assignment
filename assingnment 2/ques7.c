//Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num&1){
        printf("LSB of %d is 1",num);
    }
    else
    {
        printf("LSB of %d id 0",num);
    }
    
    return 0;
}
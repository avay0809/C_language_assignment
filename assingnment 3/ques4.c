//Write a program to check whether a given number is an even number or an odd number without using % operator.
/*
#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if((num & 1)==0)
        printf("%d is even number",num);
    else
       printf("%d is odd number",num);

    return 0;
}
*/ 

// other way

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if((num>>1)<<1==num)
     printf("%d is even number");
    else
     printf("%d is odd number"); 
    return 0;
}
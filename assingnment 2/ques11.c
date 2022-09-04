/*Write a program to input a number from the user and also input a digit. 
Append a digit in the number and print the resulting number.*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Digit=");
    scanf("%d",&b);
    c=a*10+b;
    printf("The resulting number is %d ",c);
    
    return 0;
}
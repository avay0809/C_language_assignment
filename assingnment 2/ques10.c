//Write a program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>

int main(){
    int num,r,ans,c=0;
    printf("Enter the number:");
    scanf("%d",&num);
    
    r=num%10;
    num=num/10; 
    ans=num*10;
    
    printf("The resulting number is %d ",ans);
    
    return 0;
}



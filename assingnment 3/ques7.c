//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("\nEnter the number of a: ");
    scanf("%d",&a);
    printf("\nEnter the number of b: ");
    scanf("%d",&b);
    printf("\nEnter the number of c: ");
    scanf("%d",&c);

    d=b*b-4*a*c;

    if(d>0)
    {
      printf("The roots of a given quadratic equation are real & distinct");
    }
    else if(d==0)
    {
      printf("The roots of a given quadratic equation are real & equal"); 
    }
    else
    {
      printf("roots of a given quadratic equation are imaginary roots");
    }
     printf("\n");
    return 0;
}
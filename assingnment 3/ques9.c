//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

/*
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    else
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);            
     
     printf("\n");
    return 0;
}

*/

#include<stdio.h>

int main(){
    int a,b,c,k;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    k=a>b ? a>c?a:c : b>c?b:c;
    printf("%d",k);
    return 0;
}
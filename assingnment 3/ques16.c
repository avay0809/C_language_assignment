//Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("Upper case Alphabet");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("Lower case Alphabet");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("Number");
    }
    else
    {
        printf("Symbol");
    }
    return 0;
}
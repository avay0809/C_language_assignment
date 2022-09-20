//Write a program to check whether a given alphabet is in uppercase or lowercase.


#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("Character is Uppercase Letter.");
    else if (ch>='a' && ch<='z')
    printf("Character is Lowercase Letter.");
    else
    printf("Not a Character.");
    return 0;
}
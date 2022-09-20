//Write a program to print a table of 5.

#include<stdio.h>

int main(){
    int i,table;
    printf("\nTable of 5\n");
    for(i=1; i<=10; i++)
    {
        table = 5*i;
        printf(" 5 * %d = %d\n", i, table);
    }
    return 0;
}
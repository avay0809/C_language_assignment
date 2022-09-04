//Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main(){
    int intType;
    char charType;
    float floatType;
    double doubleType;
 
    

    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Size of char: %d bytes\n", sizeof(charType));
    printf("Size of double: %d bytes\n", sizeof(doubleType)); 

    return 0;
}

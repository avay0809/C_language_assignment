// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.


#include<stdio.h>

int main(){
    float cp,sp;//cp=cost price sp= selling price
    printf("Enter the Cost Price = ");
    scanf("%f",&cp);
    printf("Enter the Selling Price = ");
    scanf("%f",&sp);

    if(sp>cp)
    {
      printf("Profit = %f\n",sp-cp);
    }
    else if(cp>sp)
    {
        printf("Loss = %f\n",cp-sp);
    }
    else
    {
        printf("No Profit and No Loss\n");
    }
    
    return 0;
}
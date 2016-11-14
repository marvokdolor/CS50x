#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    //Get a non-negative amount of change owed and convert to an integer
    float change;
    do
    {
     printf("How much change is needed?\n"); 
     change = GetFloat();
    }
    while (change < 0);
    
    change = round (change * 100);
    int int_change = (int)change;
    //printf("%d\n", int_change);
    
    //Determine how many of each coin can be used and print total
    int number_of_coins = 0;
    
    //quarters
    while (int_change >= 25)
    {
        number_of_coins++;
        int_change = int_change - 25;
    }
    
    //dimes
    while (int_change >= 10 && int_change < 25)
    {
        number_of_coins++;
        int_change = int_change - 10;
    }
    
    //nickels
    while (int_change >= 5 && int_change < 10)
    {
        number_of_coins++;
        int_change = int_change - 5;
    }
    
    //pennies
    while (int_change >= 1 && int_change < 5)
    {
        number_of_coins++;
        int_change = int_change - 1;
    }
    
    printf("%d\n", number_of_coins);
   
    return 0;
    
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* ask the user for length of shower in 
    minutes
    assume shower releases 1.5 gallons or 
    192 oz of water per minute;
    calculate and display number of 16 oz bottles of 
    water their shower uses
    */
    printf("minutes:");
    int minutes = GetInt();
    int bottles = minutes*192/16;
    printf("bottles:%i\n", bottles);
}
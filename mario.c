#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get height of pyramid from user between 1 and 23
    int height;
    do
    {
        printf("Please enter a non-negative integer no greater than 23.\nheight: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    // Print out pyramid based on height from user
    // Used guidance from http://stackoverflow.com/questions/14678948/how-to-repeat-a-char-using-printf
    int row;
    for (row = 0; row < height; row++)
    {
        printf("%.*s", height-1-row, "                       ");
        printf("%.*s", row+2, "########################");
        printf("\n");
    }
}
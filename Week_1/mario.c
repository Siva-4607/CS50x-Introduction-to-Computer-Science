#include <cs50.h>
#include <stdio.h>
void pyramid(int d)
{
    for (int i = 1; i <= d; i++)
    {
        // loop to add spaces
        for (int s = 0; s < d - i; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    int h;
    // ask the user to enter the height
    // if the input is invalid we have to reprompt it

    do
    {
        h = get_int("Enter the height of the pyramid:");
        pyramid(h);
    }
    while (h < 1 || h > 8);


    // call a function to perform the task of printing the pyramid
}

#include <cs50.h>
#include <stdio.h>
void pyramid(int d)
{
    for (int i = 1; i <= d; i++)
    {
        // print spaces
        for (int s = 0; s < d - i; s++)
        {
            printf(" ");
        }
        // print left hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        // print gap
        printf("  ");
        // print right hashes
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
int main()
{
    // get input from the user
    int h;
    do
    {
        h = get_int("Enter the height of the pyramid:");
        pyramid(h);
    }
    while (h < 1 || h > 8);
    
    // make right aligned pyramid and then make left aligned pyramid
}

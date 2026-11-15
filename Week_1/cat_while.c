#include<cs50.h>
#include<stdio.h>

int main()
{
    // Getting input value from the user

    int n;
    while(true) // Infinite loop condition
    {
        n = get_int("Enter the value of n: ");
        if (n >= 0)
        {
            break
        }
    }

    // Printing the statement in for loop for n number of times

    for (int i = 0; i < n; i++)
    {
        printf("Meow \n");
    }

}

#include<cs50.h>
#include<stdio.h>

int main()
{
    // Getting input value from the user

    int n = get_int("Enter the number of times: ");

    // Using for loop to print n number of statements

    for (int i = 0; i < n; i++)
    {
        printf("meow \n");
    }
}

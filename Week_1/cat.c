#include<cs50.h>
#include<stdio.h>

int main()
{
    // Getting input value from the user

    int n = get_int("Enter the number of times: ");

    // If the entered integer is negative
    
    if (n < 0)
    {
        printf("Enter the positive number! \n");
    }
    // Using for loop to print n number of statements

    for (int i = 0; i < n; i++)
    {
        printf("meow \n");
    }
}
/*
The entire program runs only if the user input is a positive number else it reminds the user
enter a positive number and ends the program

But in order to continue asking the user until they give a correct input, 
we use while loop or do while loop to perform the program
*/
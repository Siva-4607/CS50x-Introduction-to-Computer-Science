#include<cs50.h>
#include<stdio.h>

int main()
{
    // Getting input from the user

    char c = get_char("Do you agree? ");

    // Comparing the character using the relational operator (==) and logical operator (|| OR)

    if (c == 'y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n')
    {
        printf("Not agreed. \n");
    }
}
/*
We use a single quote in the if statement instead double quotes
because it is the way we do in C, thta  if we are using character (char data type) and
comparing them, we use single quotes

Whereas when we use the double quotes in the if statement
for the strings and the comparison of strings
*/

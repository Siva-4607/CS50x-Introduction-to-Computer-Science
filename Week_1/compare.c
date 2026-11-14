#include<cs50.h>
#include<stdio.h>

int main()
{
    // Getting the input value from the user

    int x = get_int("What is the value of x?: ");
    int y = get_int("What is the value of y?: ");

    // Using relational operators for comparison
    
    if (x < y)
    {
        printf("x is less than y \n");
    }
    else if (x > y)
    {
        printf("x is greater than y \n");
    }
    else
    {
        printf("x is equal to y \n");
    }
}

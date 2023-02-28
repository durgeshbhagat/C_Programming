#include<stdio.h>

// Function declaration or Function prototype
int check_even(int x);

// Main Function : First function to be executed
int main()
{   int x=10, y;
    y= check_even(x); // Function call
    if(y==1)
        printf("%d is Even\n", x);
    else
        printf("%d is Odd\n", x);
}

// Function Definition
int check_even(int x)
{
    if(x%2==0)
        return 1;
    else
    {
        return 0;
    }
}
#include<stdio.h>

int check_prime(int x); // Function declaration

int main()
{   int x, temp, n1, n2, sum_total;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    temp=check_prime(x); // Function call
    if(temp==1)
        printf("\t%d is prime\n", x);
    else
        printf("\t%d is not prime\n", x);
    
}

// Function Definition
int check_prime(int n)
{
    int i, flag_prime=1; // by default number n is prime

    for(i=2;i<n;i++)
    {   // n =9 
        if(n%i ==0)
        {
            flag_prime = 0;
            break;
        }
        
    }
    return flag_prime;
}

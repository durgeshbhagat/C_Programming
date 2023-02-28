#include<stdio.h>

int factorial(int x);

int main()
{   
    int n, fact_ans;
    printf("Enter the value of n\t ");
    scanf("%d", &n);
    fact_ans = factorial(n);
    printf("\n Fact of %d is %d\n", n, fact_ans);
    return 0;
}

int factorial(int x)
{
    int pro=1, i;
    if(i==0)
        pro = 1;
    for(i=1;i<=x; i++)
        pro *= i;
    return pro;
}
#include<stdio.h>

int factorial(int x);
int power(int x, int n);
int sum_of_series(int x, int n);
int main()
{
    int x, n;
    float ans;
    printf("Enter the value of X and \t");
    scanf("%d %d", &x, &n);
    ans = sum_of_series(x, n);
    printf("Sum of series : %f \n", ans);

    return 0;
}

int sum_of_series(int x, int n)
{
    int i, fact_i, pow_i;
    float sum_total=0;
    for(i=0; i<=n; i++)
    {
        pow_i = power(x,i);
        fact_i = factorial(i);
        sum_total += (pow_i *1.0) / fact_i;
    }
    return sum_total;
}
int power(int x, int n)
{
    int i, pro=1;
    for(i=1; i<=n; i++)
        pro *= x;
    return pro;
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
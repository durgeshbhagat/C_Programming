# include<stdio.h>

int power(int x, int n);

int main()
{
    int x, n, res;
    printf("Enter the value of x and n\t");
    scanf("%d %d", &x, &n);
    res = power(x, n);
    printf("res=%d\n", res);
    return 0;
}

int power(int x, int n)
{
    int i, pro=1;
    for(i=1; i<=n; i++)
        pro *= x;
    return pro;
}
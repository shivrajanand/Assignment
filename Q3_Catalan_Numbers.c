// nth catalan number, Cn = (2n)!/{(n+1)! * n!}

#include <stdio.h>

long factorial(int n);

int main()
{
    int n;
    long fact_2n, fact_nPlus1, fact_n, Cn;

    printf("Enter the index value of catalan number: ");
    scanf("%d", &n);

    int x = 2 * n;
    fact_2n = factorial(x);
    fact_nPlus1 = factorial((n + 1));
    fact_n = factorial(n);

    Cn = fact_2n / (fact_nPlus1 * fact_n);

    printf("Number %d catalan\'s constant is %d", n, Cn);

    return 0;
}

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
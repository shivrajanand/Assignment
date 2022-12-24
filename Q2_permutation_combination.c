#include <stdio.h>

long factorial(int n);

int main()
{
    int n, r, n_minus_r;
    long fact_n, fact_r, fact_n_minus_r, nPr, nCr;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    n_minus_r = n - r;

    fact_n = factorial(n);
    fact_r = factorial(r);
    fact_n_minus_r = factorial(n_minus_r);

    nPr = fact_n / fact_n_minus_r;
    nCr = fact_n / (fact_r * fact_n_minus_r);

    printf("%dC%d = %d\n", n, r, nCr);
    printf("%dP%d = %d", n, r, nPr);
    return 0;
}

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
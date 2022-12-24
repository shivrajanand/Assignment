#include <stdio.h>

int add_five(int n);

int main()
{
    int num, new;
    printf("Enter Number: ");
    scanf("%d", &num);

    new = add_five(num);
    printf("%d", new);
        
    return 0;
}

int add_five(int n)
{
    return (n + 5);
}
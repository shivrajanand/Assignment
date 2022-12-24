#include <stdio.h>

int main()
{
    int n, target;
    printf("Enter number of elements in your array: ");
    scanf("%d", &n);
    int list[n];
    printf("\nInput Elements in Array: \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", (i + 1));
        scanf("%d", &list[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    // Finding target sum

    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (list[j] + list[k] == target)
            {
                printf("(%d, %d)", j, k);
            }
        }
    }
    return 0;
}
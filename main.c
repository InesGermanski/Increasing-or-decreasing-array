
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main()
{

    int arr1[MAX];
    int arr2[MAX];
    int i, n;
    int increasing = 0;
    int decreasing = 0;

    printf("Insert the contents in arr1:\n");
    scanf("%d", &n);
    printf("Insert the contents in arr2:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (arr1[i + 1] > arr1[i])
        {
            increasing++;
            continue;
        }
        if (arr1[i] > arr1[i + 1])
        {
            decreasing++;
            continue;
        }
    }

    if (decreasing == 0 && increasing > 0)
    {
        printf("Increasing array!\n");
        return 0;
    }
    if (increasing == 0 && decreasing > 0)
    {
        printf("Decreasing array!\n");
        return 0;
    }

    printf("The array is neither decreasing or increasing!");

    return 0;
}

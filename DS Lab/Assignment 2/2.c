// Delete two different numbers sequentially from an array. Underflow must be handled.
#include <stdio.h>
int main()
{
    int arr[100], size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int element1, element2;
    printf("Enter first element to delete: ");
    scanf("%d", &element1);
    printf("Enter second element to delete: ");
    scanf("%d", &element2);

    int flag1 = 0, flag2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element1)
        {
            flag1 = 1;
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
        }

        if (arr[i] == element2)
        {
            flag2 = 1;
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
        }
    }

    if (flag1 == 0)
    {
        printf("Element 1 not found\n");
    }
    else
    {
        printf("Element 1 deleted\n");
    }

    if (flag2 == 0)
    {
        printf("Element 2 not found\n");
    }
    else
    {
        printf("Element 2 deleted\n");
    }

    if (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Array is empty\n");
    }

    return 0;
}
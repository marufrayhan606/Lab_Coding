// Delete one element , if exist. If exist multiple times then delete all.

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

    int element;
    printf("Enter element to delete: ");
    scanf("%d", &element);

    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            flag = 1;
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
        }
    }

    if (flag == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element deleted\n");
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
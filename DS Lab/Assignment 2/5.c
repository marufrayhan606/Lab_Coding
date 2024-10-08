// Apply Linear Search for finding an element. Count the occurrences of it. and Delete one occurence of it. again find the element and if found , print the current occurence of it.
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

    int flag = 0, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            flag = 1;
            count++;
        }
    }

    if (flag)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                for (int j = i; j < size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                size--;
                break;
            }
        }
    }

    if (flag)
    {
        printf("Element %d deleted. Occurrences before deletion: %d\n", element, count);
    }
    else
    {
        printf("Element %d not found.\n", element);
    }

    flag = 0;
    count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            flag = 1;
            count++;
        }
    }

    if (flag)
    {
        printf("Element %d found again. Current occurrences: %d\n", element, count);
    }
    else
    {
        printf("Element %d not found after deletion.\n", element);
    }

    return 0;
}
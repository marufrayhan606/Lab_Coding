#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element(%d): ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Enter the element to find: ");
    int find;
    scanf("%d", &find);

    int start = 0, end = size, flag = 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == find)
        {
            printf("Element found at index %d\n", mid);
            flag = 0;
            break;
        }
        else if (arr[mid] < find)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (flag)
    {
        printf("Element not found\n");
    }

    return 0;
}

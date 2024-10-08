//  Suppose you have an array with some elements. Now Find out two elements and delete it if exist. If not exist any one or both of them, then print "This element can not be deleted as it is not exist".
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

    if (flag1 == 0 || flag2 == 0)
    {
        printf("This element can not be deleted as it is not exist\n");
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
#include <stdio.h>

int main()
{
    const int maxSize = 10;
    int arr[maxSize], size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    int pos;
    scanf("%d", &pos);

    if (pos < 0 || pos >= maxSize)
    {
        printf("Invalid position\n");
        return 0;
    }

    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    size++;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
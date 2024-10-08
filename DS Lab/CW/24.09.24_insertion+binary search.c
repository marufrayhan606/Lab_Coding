#include <stdio.h>

void insert(int arr[], int position, int size, int element)
{
    for (int i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[10], size;

    printf("Enter the size of the element: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element to insert to 4th index: ");
    scanf("%d", &element);

    // insert(arr, 4, size, element);
    // printArray(arr, size);

    return 0;
}
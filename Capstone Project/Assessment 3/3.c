#include <stdio.h>

int main()
{
    int a[] = {10, 5, 4, 10, 67, 45, 60};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Enter element to search: ");
    int key;
    scanf("%d", &key);

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at index %d\n", i);
            a[i] = -1;
            flag = 1;
        }
    }

    (flag == 0) ? printf("Element not found\n") : 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
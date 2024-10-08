#include <stdio.h>
int main()
{
    char str[100];
    int i, j, temp;
    printf("Enter a string: ");
    gets(str);

    for (i = 0, j = 0; str[j] != '\0'; j++)
        ;
    j--;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reverse string: %s", str);

    return 0;
}

// Author: Md. Maruf Rayhan(623) :D
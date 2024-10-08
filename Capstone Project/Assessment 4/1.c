#include <stdio.h>
int main()
{
    char str[100];
    int vowels = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }

    printf("Number of vowels: %d", vowels);

    return 0;
}

// Author: Md. Maruf Rayhan(623) :D
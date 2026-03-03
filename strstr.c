#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[20];
    char *n;

    printf("\nEnter main string: ");
    scanf("%99s", str);

    printf("Enter sub string: ");
    scanf("%19s", sub);

    n = strstr(str, sub);

    if (n == NULL)
    {
        printf("\nSub string not found");
    }
    else
    {
        printf("\nSubstring is found at position %ld", n - str);
    }

    return 0;
}

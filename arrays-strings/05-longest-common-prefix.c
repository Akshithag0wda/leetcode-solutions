#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char str[100][100];
    int minLength;
    int same;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    minLength = strlen(str[0]);

    for (i = 1; i < n; i++)
    {
        if (strlen(str[i]) < minLength)
            minLength = strlen(str[i]);
    }

    for (i = 0; i < minLength; i++)
    {
        same = 1;

        for (j = 1; j < n; j++)
        {
            if (str[0][i] != str[j][i])
            {
                same = 0;
                break;
            }
        }

        if (!same)
            break;
    }

    printf("Longest Common Prefix: ");

    for (j = 0; j < i; j++)
    {
        printf("%c", str[0][j]);
    }

    printf("\n");

    return 0;
}
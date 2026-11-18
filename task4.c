
#include <stdio.h>
#include <string.h>

int main()
{
    char n[5][50], a[50], c;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter student %d name: ", i + 1);
        scanf(" %49[^\n]", n[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Name: %s, Length: %zu\n", n[i], strlen(n[i]));
    }

    strcpy(a, n[0]);
    printf("Copied first name: %s\n", a);

    printf("Enter character to search: ");
    scanf(" %c", &c);

    for (i = 0; i < 5; i++)
    {
        if (strchr(n[i], c) != NULL)
        {
            printf("%s: Character found\n", n[i]);
        }
        else
        {
            printf("%s: Character not found\n", n[i]);
        }
    }

    return 0;
}

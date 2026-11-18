
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c;
    char *p;

    printf("Enter a sentence: ");
    scanf(" %99[^\n]", a);

    printf("Enter a character: ");
    scanf(" %c", &c);

    p = strchr(a, c);

    if (p != NULL)
    {
        printf("Found at position: %d\n", (int)(p - a) + 1);
    }
    else
    {
        printf("Character not found\n");
    }

    strcpy(b, a);
    printf("Copied sentence: %s\n", b);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], b[50];

    printf("Enter first product: ");
    scanf(" %49[^\n]", a);

    printf("Enter second product: ");
    scanf(" %49[^\n]", b);

    if (strcmp(a, b) == 0)
    {
        printf("Products are identical\n");
    }
    else
    {
        printf("Products are different\n");
    }

    printf("First product length: %zu\n", strlen(a));
    printf("Second product length: %zu\n", strlen(b));

    return 0;
}

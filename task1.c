
#include <stdio.h>
#include <string.h>

int main()
{
    char a[80], b[110];

    printf("Enter full name: ");
    scanf(" %79[^\n]", a);

    printf("Length: %zu\n", strlen(a));

    strcpy(b, a);
    strcat(b, " - FAST University");

    printf("Original: %s\n", a);
    printf("Modified: %s\n", b);

    return 0;
}


#include <stdio.h>

int main()
{
    FILE *f;
    int ac, a, b, x, y;

    printf("Enter account number: ");
    scanf("%d", &ac);

    printf("Enter first transaction: ");
    scanf("%d", &a);

    f = fopen("bank.txt", "w");
    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    fprintf(f, "%d %d\n", ac, a);
    fclose(f);

    printf("Enter second transaction: ");
    scanf("%d", &b);

    f = fopen("bank.txt", "a");
    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    fprintf(f, "%d %d\n", ac, b);
    fclose(f);

    f = fopen("bank.txt", "r");
    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    printf("\nBank Records:\n");

    while (fscanf(f, "%d %d", &x, &y) == 2)
    {
        printf("Account: %d, Transaction: %d\n", x, y);
    }

    fclose(f);
    return 0;
}

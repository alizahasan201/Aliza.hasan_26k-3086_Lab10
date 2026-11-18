
#include <stdio.h>

int main()
{
    FILE *f;
    int m, t, a, b;

    f = fopen("marks.txt", "r+");

    if (f == NULL)
    {
        printf("First create marks.txt with: 070 100\n");
        return 0;
    }

    fscanf(f, "%d %d", &m, &t);
    printf("Old Marks: %d out of %d\n", m, t);

    printf("Enter new obtained marks: ");
    scanf("%d", &a);

    rewind(f);

    fprintf(f, "%03d %03d\n", a, t);
    fclose(f);

    f = fopen("marks.txt", "r");

    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    fscanf(f, "%d %d", &a, &b);
    printf("New Marks: %d out of %d\n", a, b);

    fclose(f);
    return 0;
}

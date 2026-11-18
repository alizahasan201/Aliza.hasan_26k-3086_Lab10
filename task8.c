
#include <stdio.h>

int main()
{
    FILE *f;
    int id, m, t, a, b, c;
    float p, q;

    f = fopen("result.txt", "w+");

    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    printf("Enter student ID: ");
    scanf("%d", &id);

    printf("Enter obtained marks: ");
    scanf("%d", &m);

    printf("Enter total marks: ");
    scanf("%d", &t);

    if (t <= 0)
    {
        printf("Total marks must be greater than zero\n");
        fclose(f);
        return 0;
    }

    p = m * 100.0 / t;

    fprintf(f, "%d %d %d %.2f\n", id, m, t, p);

    rewind(f);

    fscanf(f, "%d %d %d %f", &a, &b, &c, &q);

    printf("\nStudent ID: %d\n", a);
    printf("Obtained Marks: %d\n", b);
    printf("Total Marks: %d\n", c);
    printf("Percentage: %.2f%%\n", q);

    fclose(f);
    return 0;
}


#include <stdio.h>

int main()
{
    FILE *f;
    char n[50], a[50];
    int m, t, x, y;
    float p, q;

    printf("Enter student name: ");
    scanf(" %49[^\n]", n);

    printf("Enter obtained marks: ");
    scanf("%d", &m);

    printf("Enter total marks: ");
    scanf("%d", &t);

    if (t <= 0)
    {
        printf("Total marks must be greater than zero\n");
        return 0;
    }

    p = m * 100.0 / t;

    f = fopen("student.txt", "w");
    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    fprintf(f, "%s\n%d %d %.2f\n", n, m, t, p);
    fclose(f);

    f = fopen("student.txt", "r");
    if (f == NULL)
    {
        printf("File not opened\n");
        return 0;
    }

    fscanf(f, " %49[^\n]", a);
    fscanf(f, "%d %d %f", &x, &y, &q);

    printf("\nName: %s\n", a);
    printf("Obtained Marks: %d\n", x);
    printf("Total Marks: %d\n", y);
    printf("Percentage: %.2f%%\n", q);

    fclose(f);
    return 0;
}

#include <stdio.h>

typedef struct {
    char name[100];
    int score;
} student;

student *sort(student ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[j].score < ar[i].score)
            {
                student x = ar[i];
                ar[i] = ar[j];
                ar[j] = x;
            }
        }
    }
    return ar;
}

int main()
{
    int id;
    scanf("%i", &id);

    if (id <= 0)
        return 1;

    student data[id];

    for (int i = 0; i < id; i++)
    {
        scanf("%99s %i", data[i].name, &data[i].score);
    }

    int n = sizeof(data) / sizeof(data[0]);

    student *sorted = sort(data, n);

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += sorted[i].score;
    }

    printf("Average: %.2f\n", sum / n);
    printf("Top student: %s %i\n", data[0].name, data[0].score);

    for (int i = 0; i < n; i++)
    {
        printf("%s %i\n", sorted[i].name, sorted[i].score);
    }

    return 0;
}
#include<stdio.h>

typedef struct{
    int ID;
    char name[100];
    char major[100];
} student;
student data[]={
        {99 , "dinosour", "Ai"},
        {103,  "Vali" , "Ai"},
        {101,  "Ali", "Cs"},
        {100,  "Qli", "Engeniring"},
        {102,   "Azam", "Cyber Security"},
        {105,   "Aziz", "Ai"}
    };

void sort(student ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[j].ID > ar[i].ID)
            {
                student x = ar[i];
                ar[i] = ar[j];
                ar[j] = x;
            }
        }
    }
}
int main()
{
    int id;
    scanf("%i", &id);
    int n=sizeof(data)/sizeof(data[0]);
    sort(data,n);
    int l=0, r=n-1, m;
    while (l<=r)
    {
        m=(l+r)/2;
        printf("%i %i %i %i\n", data[m].ID ,l,m,r);
        if(data[m].ID==id)
        {
            //printf("%i %s %s\n", data[m].ID, data[m].name, data[m].major);
            return 0;
        }
        else if (data[m].ID<id)
        {

            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    printf("not found");
}
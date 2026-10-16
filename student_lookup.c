#include<stdio.h>

typedef struct{
    int ID;
    char name[100];
    char major[100];
} student;


int main()
{
    //printf("%s", "ok");
    student data[]={

        {103,  "Vali" , "Ai"},
        {101,  "Ali", "Cs"},
        {100,  "Qli", "Engeniring"},
        {102,   "Azam", "Cyber Security"},
        {105,   "Aziz", "Ai"}
    };
    //printf("%s", "ok");
    int id;
    int n=sizeof(data)/sizeof(data[0]);
    scanf("%d", &id);
    //printf("%s", "ok");
    for(int i=0;i<n;i++)
    {
        //printf("%s", "ok");
        if (data[i].ID==id)
        {
            printf("%s ", data[i].name);
            printf("%s", data[i].major);
        }
    }
    printf("%s", "not found");
}
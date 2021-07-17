#include<stdio.h>

// #include<conio.h>

struct student
{
    char name[20];
    char Birth_Date[20];
};


int main ()
{
    int i, n;

    printf ("Enter how many records u want to store : "); 
    scanf("%d", &n);

    struct student stuarr[n];

    printf ("Enter name & Birth Date Below:- \n");

    for (i = 0; i<n; i++)
    {
        printf ("\nEnter Data %d: \n", i + 1);

        printf("Enter Name: "); 
        scanf("%s", stuarr[i].name);

        printf("Enter Birth Date: "); 
        scanf ("%s", stuarr[i].Birth_Date);
    }

    printf ("\n \t Name \t \t Birth Date \t \n");

    for (i = 0; i <n; i++)
    {
        printf ("\t %s \t %s \t \n", stuarr[i].name, stuarr[i].Birth_Date);
    } 



    return 0;
    }


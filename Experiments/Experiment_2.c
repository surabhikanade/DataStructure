#include<stdio.h>
// #include<conio.h>

struct student
{
    char name[20];
    int rollNo;
    char DOB[10];
};

int main()
{
    int i,n;

    printf("Enter How many records u want to store:");
    scanf("%d",&n);


    struct student stuarr[n];

    printf("Enter Name,Roll No and DOB Below:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter Data %d :\n",i+1); 

        printf("Enter Name :");
        scanf("%s",stuarr[i].name);

        printf("Enter Roll No.:");
        scanf("%d",&stuarr[i].rollNo);

        printf("Enter DOB :");
        scanf("%s",stuarr[i].DOB);
    }
    printf("\n\t Name \t Roll NO. \t DOB \t \n");
    for (int i = 0; i < n ;i++)
    {
        printf("\t %s \t %d \t %s \t \n",stuarr[i].name,stuarr[i].rollNo,stuarr[i].DOB );
    }
    return 0;
}
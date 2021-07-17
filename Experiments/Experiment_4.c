#include <stdio.h>

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept (struct customer[] ,int);
void display (struct customer[],int);
int search(struct customer[],int,int);
void deposit(struct customer[],int,int,int);
void withdraw(strcut customer[],int,int,int);

int main()
{
    struct customer data[20];
    int n ,choice,account_no,amount,index;

    printf("Banking System\n\n"); 
    printf("Number of customer records you want to Enter :: "); scanf("%d", &n); accept (data, n);

do {

printf("\nBanking System Menu : \n"); 
printf("Press 1 to display all records.\n");

printf("Press 2 to search a record. \n"); 
printf("Press 3 to deposit amount.\n");

printf("Press 4 to withdraw amount.\n");

printf("Press 8 to exit\n"); 
printf("\nEnter choice (0-4): ");

scanf("%d", &choice); 
switch (choice)
{
    case 1: 
        display(data, n); 
        break;
    case 2: 
        display(data, n); 
        break;

    case 3: 
        display(data, n); 
        break;



}




}
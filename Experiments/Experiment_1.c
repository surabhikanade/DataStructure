#include<stdio.h>

int addNumber(int a ,int b)
{
    int result;
    result =a+b;
    return result;
}

int main()
{
    int n1,n2,sum;

    printf("User defined function Addition : \n");

    printf("Enter First Number : ");
    scanf("%d" ,&n1);

    printf("Enter Second Number : ");
    scanf("%d" ,&n2);

    sum = addNumber(n1,n2);
    printf("\n Addition of two No.s is: %d ", sum);

}
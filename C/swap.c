#include<stdio.h>


int main()
{
    int a,b,c ;
    printf("Enter two no.s.: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
 
    printf("swapping of no.s %d\t%d",a,b);

}
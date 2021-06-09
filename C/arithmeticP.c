#include<stdio.h>

int main()
{
    int a,b,n;
  float tn;
    scanf("%d %d %d",&a,&b,&n);
    tn= a+(b-1)*n;
    printf("%.1f",tn);
    return 0;
}
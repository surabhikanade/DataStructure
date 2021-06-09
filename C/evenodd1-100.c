#include<stdio.h>
int main()
{
    int i;

    // odd number
    for (int i = 1; i <100; i+=2)
    {
        printf("%d\n",i);
    }
    
    //even number
    for (int i = 2; i <100; i+=2)
    {
        printf("\t%d\n",i);
    }
}
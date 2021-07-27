#include<iostream>

using namespace std;

int main()
{
    int i,j;
    char Ch='A';

    for(i=1;i<=5;i++)
    {
        Ch='A';
        for(j=1;j<=5;j++)
        {
            if(j<=i )
            {
                cout<<Ch;
                Ch++;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
}
// *     *
// *     *
// *     *
// *******
// *     *
// *     *
// *     *
#include<iostream>

using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==1 ||  j==7 && j!=i<7 || i==4)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
}
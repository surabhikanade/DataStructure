// $ # # # 
// * $ # #
// * * $ #
// * * * $

#include<iostream>

using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else if(i == j)
            {
                cout<<"$";
            }
            else{
                cout<<"#";
            }
        }
        cout<<"\n";
    }
}
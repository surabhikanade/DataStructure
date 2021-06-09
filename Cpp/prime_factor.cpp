#include<iostream>

using namespace std;

int main()
{
    int n;
    int i,j,count=0;
    cin>>n;
    cout<<"Enter a number:"<<endl;

    for(i=1;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
    if(j==i)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            count++;
        }
    }
    }
    if(count==0)
    {
        cout<<"NOt Found an prime Factor"<<endl;
    }
}
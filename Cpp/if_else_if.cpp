#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three No:"<<endl;
    cin>>a>>b>>c;

    if(a>b &&a>c)
    {
        cout<<"a is greatest than b and c"<<endl;
    }
    else if(b>a && b>c)
    {
       cout<<"b is greatest than a and c"<<endl; 
    }
    else if(c>a && c>b)
    {
       cout<<"c is greatest than a and b"<<endl;
    }
    else
    {
        cout<<"NO condition satiesfied"<<endl;
    }
}
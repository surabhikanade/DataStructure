#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter a no.:"<<endl;
    cin>>a;
    if(a>10)
    {
        if(a==15)
        {
            cout<<"Enter a no. again:"<<endl;
            cin>>b;

            cout<<"Value of b is :"<<b;

            if(b>20)
            {
                cout<<" b is greater than 20:"<<endl;
            }
            else
            {

                cout<<" b is less than 20:"<<endl;
            }

        }
    }
}
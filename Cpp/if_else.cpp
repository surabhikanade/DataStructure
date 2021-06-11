#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter YOur Age:"<<endl;
    cin>>age;

    if(age>=18)
    {
        cout<<"Eligible for voting"<<endl;
    }
    else
    {
        cout<<"Not eligible for voting"<<endl;
    }
}
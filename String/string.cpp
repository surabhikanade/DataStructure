#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="abcdefghijklmnopqrstuvwxyz";

    // convert string into upper case

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i] -= 32;
    }
    cout<<str<<endl;
    
    // convert string into lower case

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i] += 32;
    }
    cout<<str<<endl;


    return 0;
}
#include<iostream>
#include<algorithm>
// if we use string then we have to declare header file like
#include<string>

using namespace std;

int main()
{
    string str;

    getline(cin,str);
    // with space in string
    cout<<str<<endl;
}
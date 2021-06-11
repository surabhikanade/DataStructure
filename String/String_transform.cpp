#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s ="sakdljjklnklnfd";

    // uppercase
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    // lowercase
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

}
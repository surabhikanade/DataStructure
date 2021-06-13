#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string str;

    string s1 ="sur";
    string s2 = "abhi";

    s1.append(s2);
    // OR 
    // s1 = s1 + s2;
    
    cout<<s1<<endl;;
}
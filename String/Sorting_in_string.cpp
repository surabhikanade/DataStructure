#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s1 = "xcabfgktyzdmqp";

    sort(s1.length(), s1.end());

    cout<<s1<<endl;

    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = "465793930983";

    sort(s.begin(),s.end(), greater <int> ());
    cout<<s<<endl;

}
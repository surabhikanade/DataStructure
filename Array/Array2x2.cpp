#include<iostream>

using namespace std;

int main()
{
    int a[2][2]={{1,2},{2,2}};
    int b[2][2]={{3,3},{4,4}};
    int c[2][2];

    c[2][2]=a[2][2]+b[2][2];
    cout<<c[2][2]<<endl;
}
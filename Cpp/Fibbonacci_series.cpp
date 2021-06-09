// Fibbonacci Series :
// 0 1 1 2 3 5 8 13 21 34 55 ...........

// n1=0
// n2=1
// n3=n1+n2

// n1=n2;
// n2=n3;
// n3=n1+n2;

#include<iostream>

using namespace std;

int main()
{
    int n1=0,n2=1,n3,i,n;

    cout<<"Enter a number upto which you want to iterate:"<<endl;
    cin>>n;
    cout<<n1<<endl;
    cout<<n2<<endl;

    for(i=1;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        
        cout<<n3<<endl;

    }

}
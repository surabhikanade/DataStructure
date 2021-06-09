#include<iostream>

using namespace std;

int main()
{
    int n, r, sum=0;

    cout<<"Enter a Number"<<endl;
    cin>> n;

    while (n!=0)
    {
        r=n%10; //345%10=5 34%10=4 3%10= 3
        sum=sum*10+r; // 5 //543
        n=n/10; //345/10 //34/10=3

    }
    cout<<"Reverse is :"<<sum;
    


}
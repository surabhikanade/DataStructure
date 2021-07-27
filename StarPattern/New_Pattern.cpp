// 4
// 3
// 2
// 1

#include<iostream>
using namespace std;


int main()
{
    int no=0;
    int digit =0;
    cout<<"Enter a number"<<endl;
    cin>>no;

    while (no > 0)
    {
    digit = no %10;
    if(digit%2==0)//even 
    cout<<digit<<endl;
    no =no/10;
    }

    return 0;
}

// 1234 % 10 = 4
// 123/10 =123

// 123% 10 =3
// 123/10= 12

// 12%10 =2
// 12/10=1

// 1%10 =1
// 1/10 =1


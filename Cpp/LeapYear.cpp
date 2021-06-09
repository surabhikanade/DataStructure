#include<iostream>

using namespace std ;

int main()
{
    // 1.  400 100 4 yes   
    // 2.  !400 100 4 no 
    // 3. !400 !100 4 yes 

    // 1. 400 yes 
    // 2. 100 no 
    // 3. 4 yes 
    //      4 no

    int year;
    cout<<"Enter a year"<<endl;
    cin>> year;

    if(year%400 == 0 && year%100 == 0 && year%4 == 0)
    {
        cout<<"Leap Year"<<endl;
    }
    else if(year%400 != 0 && year%100 == 0 && year%4 == 0)
    {
        cout<<" NOT a Leap Year"<<endl;
    }
    else if(year%400 != 0 && year != 0 && year%4 == 0)
    {
        cout<<"Leap Year"<<endl;
    }
    else
    {
        cout<<"NOT a Leap Year"<<endl;
    }
}
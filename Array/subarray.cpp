// Que. Given an array[] of size n, output summ of each subarray of the given array 


#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int current = 0;

    for (int i = 0; i < n ; i++)
    {
        current=0;
        for (int j = i; j < n; j++)
        {
            current += a[j];
            cout<< current<<endl;
        }
        
    }
    
return 0; 
}

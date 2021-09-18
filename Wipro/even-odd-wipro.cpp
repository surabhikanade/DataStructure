// #include<iostream>
// using namespace std;

// void swap(int *i, int *j)
// {
//     int temp = *i;
//     *i = *j;
//     *j = temp;
// }
// int seperateEvenAndOdd(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while(left < right)
//     {
//         while(arr[left]%2 == 0 && left < right)
//         {
//             left++;
//         }
     
// while(arr[right]%2 == 1 && left < right)    
//         {
//             right--;
//         } 
// if(left < right)
//         {
//             swap(&arr[left], &arr[right]);
//             left++;
//             right--;
//         }
//     }
// }
// int main()
// {
//     int arr_size;
//     cin >> arr_size;
//     int arr[arr_size];
 
//     for(int i=0;i<arr_size;i++)
//     {
//         cin >> arr[i];
//     }
//     int i=0;
//     seperateEvenAndOdd(arr,arr_size);
   
//     for(i=0;i<arr_size;i++)
// 	  cout << arr[i] << " ";
//     return 0;
// }

    
    #include<iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n; 
    cin>>n;

    int array[n];
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int counter=1;  
    while (counter<n)
    {
        for (int i=0;i<n-1;i++)
        {
            if (array[i+1]%2==0 && array[i]%2!=0)
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n ;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
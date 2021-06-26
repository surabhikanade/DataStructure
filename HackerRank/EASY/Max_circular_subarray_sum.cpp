// Maximum sum of circular subarray ////

#include <iostream>
#include<climits>

using namespace std;

int kadanes(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i= 0; i<n; i++)
    {
        currentSum = currentSum + arr[i];
        if(currentSum<0)
        {
            currentSum = 0;
        }
        maxSum=max(maxSum,currentSum);
    }
     return maxSum;
}

int main()
{
    int n;
    cin>>n;
    cout<<"number of array elements"<<endl;

    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int circular;
    int staight;

    staight = kadanes(arr, n);
     
    int totalSum = 0;  
    for (int i =1; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    int maxNegative = kadanes(arr, n); 

    cout<<"compare now"<<endl;

    circular = totalSum - (-maxNegative);
    // circular = totalSum +maxNegative;

    cout<<max(circular, staight)<<" "<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "\nThe second largest element is " << arr[1];
    cout << endl;
    return 0;
}

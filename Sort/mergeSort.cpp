#include <iostream>
using namespace std;

void merge(int arr[], int mid, int low, int high)
{
    int i, j, k;
    int b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    } // after exiting this loop we have to write the
      // next while loop to take the elements left

    while (i <= mid)
    {
        b[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        b[k] = arr[i];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
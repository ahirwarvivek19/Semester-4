//Merge Sort

#include <bits/stdc++.h>
using namespace std;


// Function for Merging 
void merge(int arr[], int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        arr[i] = c[i];
    }
}

// Merge Sort
void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        //divide the array at mid and sort independently using merge sort
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        //merging sorted array
        merge(arr, low, high, mid);
    }
}



// Array input
int main()
{
    int A[30], num;
    cout << "Enter number of elements to be sorted:";
    cin >> num;
    cout << "Enter the" << num << " elements to be sorted:";
    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
    }
    mergeSort(A, 0, num - 1);
    cout << "Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}
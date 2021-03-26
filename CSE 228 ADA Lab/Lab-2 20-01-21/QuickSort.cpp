
#include <bits/stdc++.h>
using namespace std;

// Swap two elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// partition the array using last element as pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
//quicksort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        //sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
int main()
{
    int A[30], num;
    cout << "Enter number of elements to be sorted:";
    cin >> num;
    cout << "Enter the " << num << " elements:";
    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
    }
    quickSort(A, 0, num - 1);
    cout<<endl;
    cout << "Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout << A[i] << "\t";
    }
    return 0;
}
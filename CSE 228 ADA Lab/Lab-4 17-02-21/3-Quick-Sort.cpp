#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low;
    int j = high;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);

        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
        {
            swap(A[i], A[j]);
        }
    } while (i < j);

    swap(A[low], A[j]);

    return j;
}

void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int q = partition(A, low, high);
        quickSort(A, low, q);
        quickSort(A, q + 1, high);
    }
}
int main()
{
    int num;
    cout << "Enter number of elements to be sorted:";
    cin >> num;
    int A[num];
    cout << "Enter the " << num << " elements:\n";
    for (int i = 0; i < num; i++)
    {
        cin >> A[i];
    }
    quickSort(A, 0, num);
    cout << endl;
    cout << "Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout << A[i] << "\t";
    }
    return 0;
}
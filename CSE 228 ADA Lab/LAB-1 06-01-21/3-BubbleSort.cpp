// Keep Changing....@Vi

#include <bits/stdc++.h>
using namespace std;

//Bubble Sort
void Bubble(int A[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

//Optimised Bubble Sort
void BubbleSort(int A[], int n)
{
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    BubbleSort(A, n);

    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

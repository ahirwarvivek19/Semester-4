#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int l, int r)
{
    //Base case
    if (l == r)
        return arr[l];

    //Divide & Conquer
    int mid = (l + r) / 2;
    int lsum = sum(arr, l, mid);
    int rsum = sum(arr, mid+1, r);
    return lsum + rsum;
}

int main()
{

    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum is " << sum(arr, 0, n - 1);
    return 0;
}

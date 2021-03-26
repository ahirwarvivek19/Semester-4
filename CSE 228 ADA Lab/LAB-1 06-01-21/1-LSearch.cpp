// Keep Changing....@Vi

#include <iostream>
using namespace std;

// Linear search function
int linearSearch(int arr[], int n, int x)
{
    int i = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value of the key to be searched: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result == -1)
    {
        cout << "Element is not present in array";
    }

    else
    {
        cout << "Element is present at index " << result;
    }

    return 0;
}
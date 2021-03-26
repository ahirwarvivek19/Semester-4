// Keep Changing....@Vi

/*
 * Write a program to determine if a given  matrix is a sparse matrix? 
 * Calculate its time and Space complexity. How it is more efficient than the conventional matrix?
 * Sparse martix has more zero elements than nonzero elements.
 */

#include <iostream>
using namespace std;

int main()
{

    int i, j, m, n;
    int count = 0;

    cout << "Enter the order of the matix \n";
    cin >> m >> n;
    int a[m][n];

    cout << "Enter the element of the matix \n";

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cin >> a[i][j];

            if (a[i][j] == 0)
            {
                ++count;
            }
        }
    }

    if (count > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
    {
        printf("The given matrix is not a sparse matrix \n");
    }

    cout << "There are " << count << " number of zeros in the matrix" << endl;

    return 0;
}
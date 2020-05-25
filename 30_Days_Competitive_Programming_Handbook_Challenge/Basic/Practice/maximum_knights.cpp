// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum number of
// knights that can be placed on the given
// chessboard such that no two
// knights attack each other
int max_knight(int n, int m)
{

    // Check for corner case #1
    // If row or column is 1
    if (m == 1 || n == 1)
    {

        // If yes, then simply print total blocks
        // which will be the max of row or column
        return max(m, n);
    }

    // Check for corner case #2
    // If row or column is 2
    else if (m == 2 || n == 2)
    {

        // If yes, then simply calculate
        // consecutive 2 rows or columns
        int c = 0;
        c = (max(m, n) / 4) * 4;

        if (max(m, n) % 4 == 1)
        {
            c += 2;
        }
        else if (max(m, n) % 4 > 1)
        {
            c += 4;
        }
        return c;
    }

    // For general case, just print the
    // half of total blocks
    else
    {
        return (((m * n) + 1) / 2);
    }
}

// Driver code
int main()
{
    int n, m;

    cin>>n;
    cout << max_knight(n,n);

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int guess(int num)

int guessNumber(int num)
{
    int low = 0, high = n-1;

    while(low<=high)
    {
        int mid  = low + (high-low)/2;

        int ans = guess(mid);

        if(ans==0)
            return mid;
        else if(ans==-1)
            high = mid-1;
        else
            low = mid+1;
    }
}

int main()
{
    return 0;
}

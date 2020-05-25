#include<bits/stdc++.h>
using namespace std;

///bool isBadversion(int n)

int firstBadVersion(int n)
{

    int low = 1,high=n;
    int ans = -1;

    while(low<=high)
    {
        int mid = low + (high-low)/2;

        if(isBadVersion(mid))
        {
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0i<n; i++)
        cin>>v[i];

    cout<<firstBadVersion(v[i])<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>nums)
{
    int n = nums.size();
    if(n==0)
        return -1;

    int low = 0,high = n-1,ans=-1;
    int first = nums[0];

    while(low<=high)
    {
        int mid = low+ (high-low)/2;
        int value = nums[mid];

        if(value>first)
            low = mid+1;
        else
            high = mid-1;

    }
}

int main()
{
    int n,target;
    cin>>n>>target;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<search(v,target)<<endl;
}

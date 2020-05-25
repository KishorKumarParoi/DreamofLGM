#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&nums,int target)
{
    int n = nums.size();
    if(n==0)
        return -1;

    int low = 0,high = n-1;

    while(low<high)
    {
        int mid = low + (high-low)/2;
        int value = nums[mid];

        if(value==target)
            return mid;
        else if(value<target)
            low = mid+1;
        else
            high = mid;
    }

    //Post-processing
    //End condition: low==high

    if(low!=nums.size() && nums[low]==target)
        return low;
    return -1;
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

    cout<<binarySearch(v,target)<<endl;

    return 0;
}

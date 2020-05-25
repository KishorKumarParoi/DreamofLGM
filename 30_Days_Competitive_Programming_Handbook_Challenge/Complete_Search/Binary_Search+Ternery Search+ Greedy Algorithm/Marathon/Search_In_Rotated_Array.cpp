#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target)
{
    int n = nums.size();
    if(n==0)
        return -1;

    int low = 0,high = n-1,mid;
    int first = nums[0];

    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int value = nums[mid];

        if(value==target)
            return mid;

        bool am_big = value>=first;
        bool target_big = target>=first;

        if(am_big==target_big)
        {
            if(value<target)
                low = mid+1;
            else
                high = mid-1;
        }
        else
        {
            if(am_big)
                low = mid+1;
            else
                high = mid-1;
        }
    }
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

    cout<<search(v,target)<<endl;
}

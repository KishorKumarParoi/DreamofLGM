#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int n = nums.size();
    if(n==0)
        return 0;

    int i,sum=0,best=INT_MIN;

    for(i=0; i<n; i++)
    {
        sum = max(nums[i],sum+nums[i]);
        best = max(best,sum);
    }

    return best;
}

int main()
{
    int n,i;
    cin>>n;

    vector<int>v(n);
    for(i=0; i<n; i++)
        cin>>v[i];

    cout<<maxSubArray(v)<<endl;
}

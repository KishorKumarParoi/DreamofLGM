#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;

ll lwrBound(ll target)
{
    ll low = 0, high = arr.size()-1,ans=-1;

    while(low<=high)
    {
        ll mid = low + (high-low)/2;

        if(arr[mid]>=target)
        {
            if(arr[mid]==target)
                ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }

    return ans;
}

ll upprBound(ll target)
{
    ll low = 0, high = arr.size()-1,ans=-1;

    while(low<=high)
    {
        ll mid = low + (high-low)/2;

        if(arr[mid]<=target)
        {
            if(arr[mid]==target)
                ans = mid;
            low = mid+1;
        }
        else
            high = mid-1;
    }

    return ans;
}

ll Bsearch(ll target)
{
    ll left=0,right=arr.size(),ans=-1;

    while(left<=right)
    {
        ll mid = left+(right-left)/2;

        if((long long)mid*mid<=target)
        {
            ans = mid;
            left = mid+1;
        }
        else
            right = mid-1;
    }
    return ans;
}

int main()
{
    ll n,q,x;
    cin>>n>>q;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    while(q--)
    {
        cin>>x;

        cout<<Bsearch(x)<<endl;
        cout<<upprBound(x)<<" "<<lwrBound(x)<<endl;

        cout<<binary_search(arr.begin(),arr.end(),x)<<endl;
        cout<<lower_bound(arr.begin(),arr.end(),x)-arr.begin()<<endl;
        cout<<upper_bound(arr.begin(),arr.end(),x)-arr.begin()<<endl;

        auto k = equal_range(arr.begin(),arr.end(),x);
        cout<<k.second-k.first<<endl;
    }
}

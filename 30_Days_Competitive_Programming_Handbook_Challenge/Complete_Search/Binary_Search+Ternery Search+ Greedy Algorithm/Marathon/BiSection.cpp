#include<bits/stdc++.h>
using namespace std;

int mysqrt(int x)
{
    if(x<2)
        return x;


    long long lo = 0,hi = x-1,ans;

    while(lo<=hi)
    {
        long long mid = lo+ (hi-lo)/2;

        if(mid*mid==x)
            return mid;
        else if(mid*mid<x)
        {
            lo = mid+1;
            ans = mid;
            // cout<<ans<<endl;
        }
        else
            hi = mid-1;

        //out<< "High = " <<hi<< " Low = " <<lo<< " Mid = "<<mid<<endl;
    }
    return lo-1;
}

int main()
{
    int n;
    cin>>n;
    cout<<mysqrt(n)<<endl;

    return 0;
}

//23-4-20
#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,i,c=0,j;
    cin>>n;

    vector<ll>v(n);
    for(i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(),v.end());

    ll wanted = v[n/2];

    ll ans=0;
    for(auto x : v)
    {
        ans+=abs(wanted-x);
    }

    cout<<ans<<endl;

    return 0;
}


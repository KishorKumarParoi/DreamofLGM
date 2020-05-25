//23-4-20
#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ALL(v)                        v.begin(),v.end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll i,j,n,x;
    cin>>n>>x;

    vector<pair<ll,ll> >v(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i].first;
        v[i].second = i+1;
    }

    sort(ALL(v));

    i=0,j=n-1;

    while(i<j)
    {
        if(v[i].first+v[j].first==x)
        {
            cout<<v[i].second<< " "<<v[j].second<<endl;
            return 0;
        }
        else if(v[i].first+v[j].first>x)
            j--;
        else
            i++;
    }

    cout<< "IMPOSSIBLE"<<endl;

    return 0;
}

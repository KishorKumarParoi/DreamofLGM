#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;

    ll sum = n*(n+1)/2;
    ll t = sum/2;

    if(sum%2)
    {
        cout<< "NO\n";
        return 0;
    }

    ll i=n,e=0,s=0;

    vector<ll>v;

    while(true)
    {
        v.push_back(i);
        s+=i;
        i--;

        e = t - s;
        if(!e)
            break;
        if(e<=i)
        {
            v.push_back(e);
            break;
        }

    }

    puts("YES");
    cout<<v.size()<<endl;

    for(ll i =0; i<v.size()-1; i++)
        cout<<v[i] << " ";
    cout<<v[v.size()-1]<<endl;

    cout<<n-v.size()<<endl;

    ll x = n-v.size();
    for(ll j=i; j>0; j--)
    {
        if(j==e)
            continue;
        x--;
        if(x>0)
            cout<<j<<" ";
        else
            cout<<j;
    }

    cout<<endl;

    return 0;
}

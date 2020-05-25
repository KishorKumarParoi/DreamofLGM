#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char s[1000007];
    cin>>s;
    ll t=0;
    ll len=strlen(s);
    ll arr[30]= {0};
    for(ll i=0; i<len; i++)
    {
        ll j=s[i]-'A';
        arr[j]++;
    }
    ll cnt=0,c=0;
    ll arr2[26]= {0};
    for(ll i=0; i<26; i++)
    {
        arr2[i]=arr[i]/2;
        if(arr[i]%2==1)
        {
            c=i;
            t=arr[i];
            cnt++;
        }
    }
    if(cnt>=2)
    {
        cout<<"NO SOLUTION\n";
    }
    else
    {
        if(cnt==1)
        {
            for(ll i=0; i<26; i++)
            {
                if(i==c)
                {
                    continue;
                }
                ll p=arr2[i];
                for(ll k=0; k<p; k++)
                {
                    cout<<char(i+'A');
                }
            }
            for(ll k=0; k<t; k++)
            {
                cout<<char(c+'A');
            }
            for(ll i=25; i>=0; i--)
            {
                if(i==c)
                {
                    continue;
                }
                ll p=arr2[i];
                for(ll k=0; k<p; k++)
                {
                    cout<<char(i+'A');
                }
            }
        }
        else if(cnt==0)
        {
            for(ll i=0; i<26; i++)
            {
                ll p=arr2[i];
                for(ll k=0; k<p; k++)
                {
                    cout<<char(i+'A');
                }
            }
            for(ll i=25; i>=0; i--)
            {
                ll p=arr2[i];
                for(ll k=0; k<p; k++)
                {
                    cout<<char(i+'A');
                }
            }
        }
    }
    cout<<"\n";
    return 0;
}

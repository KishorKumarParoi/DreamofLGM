#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,tc,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        string s;
        cin>>s;

        ll x=0;
        for(i=0; i<n; i++)
        {
            if(s[i]-'0'==1)
                x++;

        }
        cout<<(x+1)*x/2<<endl;
    }

    return 0;
}

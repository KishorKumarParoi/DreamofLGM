#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll p=(n+1)/2;
    if(n%2==1&&p%2==1)
    {
        cout<<"NO\n";
        return 0;
    }
    else if(n%2==0&&(n/2)%2==1&&p%2==1)
    {
        cout<<"NO\n";
        return 0;
    }
    else
    {
        /*   ll s;
           cout<<"YES\n";
           if(n%2==0)
           {
               s=(n/2)*(n+1);
           }
           else
           {
               s=((n+1)/2)*n;
           }*/
        if(n%2==0)
        {
            p=n/4;
            cout<<n/2<<"\n";
            for(ll i=1; i<=p; i++)
            {
                cout<<i<<" "<<n-i+1<<" ";
            }
            cout<<"\n"<<n/2<<"\n";
            for(ll i=p+1; i<=n/2; i++)
            {
                cout<<i<<" "<<n-i+1<<" ";
            }
            cout<<"\n";
        }
        else
        {
            //for odd n .bujtechina thik
        }
    }
    return 0;
}

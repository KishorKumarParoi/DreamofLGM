#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;

ll n,m,t;
vector<ll>a;

void f(ll i,ll s)
{
    if(i==n)
    {
        ll x = s;
        ll y = t - s;
        if(y>x)
            swap(x,y);

        m = min(x-y,m);

        deb(x)  deb(y)  debln(m)

        return;
    }

    deb(i) debln(s)
    f(i+1,s);
    deb(i) deb(s) debln(a[i])
    f(i+1,s+a[i]);
}

int main()
{
    cin>>n;
    a = vector<ll>(n);

    for(ll i =0; i<n; i++)
    {
        cin>>a[i];
        t+=a[i];
    }

    m = t;
    f(0,0);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define sq(x) ((x)*(x))
#define ll unsigned long long
#define MAX 100000000
#define LMT 10000

unsigned flag[MAX/64];
unsigned primes[5761460], total;

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
    unsigned i, j, k;
    flag[0]|=0;
    for(i=3; i<LMT; i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1; j<MAX; j+=k)
                setC(j);
    primes[(j=0)++] = 2;
    for(i=3; i<MAX; i+=2)
        if(!chkC(i))
            primes[j++] = i;
    total = j;
}

map<ll,ll>mp;

void primeFactorization()
{
    mp.insert({1,0});
    for(ll j=2; j<100000; j++)
    {
        ll  temp = j,div=1,prdiv=0;

        for(unsigned i=0; i<5761460 && i*i<j; ++i)
        {
            int  cnt = 1;
            if(temp%primes[i]==0)
            {
                while(temp%primes[i]==0)
                {
                    cnt++;
                    temp/=primes[i];
                }
                prdiv++;
                div*=cnt;
            }
        }

        if(temp!=1)
        {
            div*=2;
            prdiv++;
        }

        mp.insert({div,prdiv});
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    sieve();
    primeFactorization();

    int t;
    cin>>t;

    while(t--)
    {
        ll x,y;
        cin>>x>>y;

        if(mp[x]==y)
            cout<<1<<endl;
        else
            cout<<0<<endl;

    }

    return 0;
}

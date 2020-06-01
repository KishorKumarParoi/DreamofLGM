#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

const ll M = 1000009;

bool Check(ll N,ll pos)
{
    return (bool)(N & (1<<pos));
}
ll Set(ll N,ll pos)
{
    return N= N|(1<<pos);
}

vector<ll>PRIMES;
ll status[(M/32)+2];

void BITSieve()
{
    ll i, j;

    for( i = 3; i * i <= M; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= M; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    PRIMES.push_back(2);
    for(i=3; i<=M; i+=2)
        if( Check(status[i>>5],i&31)==0)
        {
            PRIMES.push_back(i);
        }

}

ll optimizedDivisor(ll n )
{
    ll divisor = 1;
    ll x = PRIMES.size(),k=0;

    for (ll i = PRIMES[k]; i*i <= n && k<x ; i=PRIMES[++k])
    {
        ll cnt = 1;
        while (n % PRIMES[i] == 0)
        {
            n /= PRIMES[i];
            cnt++;
        }
        divisor *= cnt;
    }

    if(n!=1)
        divisor*=2;

    return divisor;
}

void primeFactorization(ll n)
{
    ll x = PRIMES.size();

    for(ll i=0; i<x; i++)
    {
        if(n%PRIMES[i]==0)
        {
            while(n%PRIMES[i]==0)
            {
                cout<<PRIMES[i]<<endl;
                n/=PRIMES[i];
            }
            if(n==1)
                break;
        }
    }
    if(n!=1)
        cout<<endl;

}

void solve()
{
    BITSieve();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}


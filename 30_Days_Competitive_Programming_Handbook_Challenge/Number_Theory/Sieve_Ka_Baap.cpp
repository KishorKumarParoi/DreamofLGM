#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
/*
#define pii pair<int,int>
#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

unsigned base[MAX / 64], segment[RNG / 64], primes[LEN];

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
    unsigned i, j, k;
    for (i = 3; i<LMT; i += 2)
        if (!chkC(base, i))
            for (j = i*i, k = i << 1; j<MAX; j += k)
                setC(base, j);
    primes[0] = 2;
    for (i = 3, j = 1; i<MAX; i += 2)
        if (!chkC(base, i))
            primes[j++] = i;
}

vector <pii> factors;
void primeFactors(int num)
{
    int expo = 0;
    for (int i = 0; primes[i] <= sqrt(num); i++)
    {
        expo = 0;
        int prime = primes[i];
        while (num % prime == 0)
        {
            expo++;
            num = num / prime;
        }
        if (expo>0)
            factors.push_back(make_pair(prime, expo));
    }

    if ( num >= 2)
        factors.push_back(make_pair(num, 1));

}

vector <int> divisors;
void setDivisors(int n, int i)
{
    int j, x, k;
    for (j = i; j<factors.size(); j++)
    {
        x = factors[j].first * n;
        for (k = 0; k<factors[j].second; k++)
        {
            divisors.push_back(x);
            setDivisors(x, j + 1);
            x *= factors[j].first;
        }
    }
}
*/

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

ll power(ll n, unsigned p)
{
    ll x=1, y=n;
    while(p > 0)
    {
        if(p&1)
            x *= y;
        y *= y;
        p >>= 1;
    }
    return x;
}

inline void update(ll &phi1, ll n, unsigned p)
{
    if(p==1)
        phi1 *= (n+1);
    else
        phi1 *= ((power(n,p+1)-1)/(n-1));
}

void factor(ll n, ll &phi1)
{
    unsigned i, v;
    ll t;
    phi1 = 1;
    for(i=0, t=primes[i]; i<total && t*t <= n; t = primes[++i])
    {
        if(n % t == 0)
        {
            v = 0;
            while(n % t == 0)
            {
                v++;
                n /= t;
            }
            update(phi1, primes[i], v);
        }
    }
    if(n>1)
        update(phi1, n, 1);
}

int main()
{
    int t, x;
    ll n, phi1;
    sieve();
    scanf("%d", &t);
    for(x=1; x<=t; x++)
    {
        scanf("%llu", &n);
        factor(n, phi1);
        printf("%llu\n",phi1-n);
    }
    return 0;
}

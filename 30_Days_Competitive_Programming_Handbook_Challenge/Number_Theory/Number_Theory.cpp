#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
#define ll long long
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

bool primeCheck(int n)
{
    if(n==1)
        return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

bool composite[100000005];
vector<int>primes;

void sieve(int N)
{
    composite[1] = 1;

    for(int i=2; (long long)i*i<=N; i++)
    {
        if(composite[i]==0)
        {
            for(int j = i*i ; j<=N; j += i)
            {
                composite[j] = 1;
            }
        }
    }
    for(int i =2; i<=N; i++)
    {
        if(composite[i]==0)
        {
            primes.push_back(i);
        }
    }
}

void primeFactorization(int N)
{
    for(int i=2; i*i<=N; i++)
    {
        if(N%i==0)
        {
            int cnt = 0;

            while(N%i==0)
                cnt++, N/=i;

            cout<< i<< "^ "<<cnt<<endl;
        }

        if(N>1)
            cout<< N<< "^" <<1<<endl;
    }
}

int bipow(int a,int b)
{
    ll res = 1;

    while(b>0)
    {
        if(b&1)
            res = (res *a);
        a = (a*a);
        b>>=1;
    }
    return res;
}

int  SOD(int  n)
{
    int  temp = n,sum=1;

    for(int  i=0; i<primes.size() && i*i<n; ++i)
    {
        int  cnt = 1;
        if(temp%primes[i]==0)
        {
            while(temp%primes[i]==0)
            {
                cnt++;
                temp/=primes[i];
            }
            //deb(primes[i]) deb(cnt)
            sum*= (bipow(primes[i],cnt)-1) / (primes[i]-1);
            // debln(sum);
        }
    }

    if(temp>1)
        sum*= (temp+1);
    //debln(sum)
    return sum;
}

int NOD(int n)
{
    int  temp = n,div=1,prdiv=0;

    for(int  i=0; i<primes.size() && i*i<n; ++i)
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
        div*=2;

    return div;
}

int main()
{

    auto st = high_resolution_clock::now();
    sieve(100000000);
    // primeFactorization(520);
    auto en = high_resolution_clock::now();
    auto duration = duration_cast < milliseconds > (en-st);
    cout<< "consumed time in ms " << duration.count() <<endl;

    return 0;
}


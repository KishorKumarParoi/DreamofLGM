//26-5-20
#pragma GCC optimize ("-O2")
#define _CRT_SECURE_NO_WARNINGS 1

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
using namespace std :: chrono;

#define scu(n)                        scanf("%u",&n)
#define scl(n)                        scanf("%d",&n)
#define scll(n)                       scanf("%lld",&n)
#define sz(a)                         (int)a.size()
#define  maxN                         1005
#define uu                            first
#define vv                            second
#define ll                            long long
#define U                             unsigned long long
#define pb                            push_back
#define mp                            make_pair
#define pii                           pair<int,int>
#define vi                            vector<int>
#define mii                           map<int,int>
#define Pi                            acos(-1.0)
#define endl                         "\n"
#define pqb                           priority_queue<int>
#define pqs                           priority_queue<int,vi,greater<int> >
#define setbits(x)                    __builtin_popcountll(x)
#define zrobits(x)                    __builtin_ctzll(x)
#define mod                           1000000007
#define inf                           1e18
#define EPS                           1e-9
#define ps(x,y)                       fixed<<setprecision(y)<<x
#define mk(arr,n,type)                type *arr=new type[n];
#define TEST                          int x; cin>>x; while(x--)
mt19937                               rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

//Vector Macros
#define pb                            push_back
#define eb                            emplace_back
#define ALL(v)                        v.begin(),v.end()
#define UNIQUE(v)                     v.erase(unique(ALL(v)),v.end())
#define MIN(c)                        *min_element(ALL(c))
#define MAX(c)                         *max_element(ALL(c))
#define SUM(c)                         accumulate(ALL(c),0)

//Loop Macros
#define For(i,a,b)                     for(ll i=a;i<=b;i++)
#define rep(i,a,b)                     for(int i=a;i<=b;i++)
#define fr(i,n)                       for(ll i=0;i<n;i++)

//Debug Macros
#define open                           freopen("input.txt","r",stdin);
#define close                          freopen("output.txt","w",stdout);
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;
//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl;}

/*
Time Calculation :
auto st = high_resolution_clock::now();
auto en = high_resolution_clock::now();
auto duration = duration_cast < milliseconds > (en-st);
cout<< "consumed time in ms " << duration.count() <<endl;
*/

#define M (U) 100000009
bool Check(U N,U pos)
{
    return (bool)(N & (1<<pos));
}
U Set(U N,U pos)
{
    return N= N|(1<<pos);
}

vector<U>PRIMES;
U status[(M/32)+2];

void BITSieve()
{
    U i, j;

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

U optimizedDivisor(U n )
{
    U divisor = 1;
    U  x = PRIMES.size(),k=0;

    for (U i = PRIMES[k]; i*i <= n && k<x ; i=PRIMES[++k])
    {
        U cnt = 1;
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

void primeFactorization(U n)
{
    U x= PRIMES.size();

    for(U i=0; i<x; i++)
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

void solve(unsigned ll numm )
{
    //600851475143;
    unsigned ll counter = 2;

    unsigned ll largestFactor = 0;

    while(counter*counter<=numm)
    {
        if(numm%counter==0)
        {
            while(numm%counter==0)
            {
                numm = numm/counter;
                //cout<<counter<< " "<<numm<<endl;;
            }
            if(largestFactor<counter)
                largestFactor = counter;
        }
        counter++;
    }

    if(numm>largestFactor)
        largestFactor=numm;

    cout<<largestFactor<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    TEST
    {
        U x;
        cin>>x;
        solve(x);
    }

    return 0;
}


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
#define U                             unsigned
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

void bruteforce()
{

    ll i=20;

    while(1)
    {
        if(i%1==0 && i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 && i%8==0 && i%9==0 && i%10==0 && i%11==0 && i%12==0&& i%13==0 && i%14==0 && i%15==0 && i%16==0 && i%17==0 && i%18==0 && i%19==0 && i%20==0)
        {
            cout<<i<<endl;
            break;
        }

        i+=20;
    }

}

void solve(ll numm)
{
    ll x;
    ll primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};

    ll ans = 1;
    for(int i=0; i<13; i++)
    {
        x = log10(numm)/log10(primes[i]);
        ans*= pow(primes[i],x);

        deb(x) deb(primes[i]) debln(ans)
    }

    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll num,tc;
    cin>>tc;

    while(tc--)
    {
        cin>>num;
        solve(num);
    }

    return 0;
}


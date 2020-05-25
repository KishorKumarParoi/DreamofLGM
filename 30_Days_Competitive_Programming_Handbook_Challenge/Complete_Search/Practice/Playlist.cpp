//23-4-20
#define _CRT_SECURE_NO_WARNINGS 1

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
using namespace std :: chrono;

#define scu(n)                        scanf("%u",&n)
#define scl(n)                        scanf("%d",&n)
#define scll(n)                       scanf("%lld",&n)
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
#define ps(x,y)                       fixed<<setprecision(y)<<x
#define mk(arr,n,type)                type *arr=new type[n];
#define w(x)                          int x; cin>>x; while(x--)
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
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;
//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl;

/*
Time Calculation :
auto st = high_resolution_clock::now();
auto en = high_resolution_clock::now();
auto duration = duration_cast < milliseconds > (en-st);
cout<< "consumed time in ms " << duration.count() <<endl;
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,i,j=0,c;
    cin>>n;

    vector<ll>v(n);
    fr(i,n)
    cin>>v[i];

    map<ll,ll>freq;
    ll max_len=0,curr_len=0;
    i=0;

    while(j<n)
    {
        if(freq.find(v[j])==freq.end() || freq[v[j]]==0)
        {
            freq[v[j]]++;
            curr_len++;
            max_len = max(max_len,curr_len);
            deb(v[j]) deb(freq[v[j]]) deb(curr_len) deb(max_len) debln(i)
            j++;
        }
        else
        {
            curr_len--;
            freq[v[i]]--;
            deb(v[i]) deb(freq[v[i]]) deb(curr_len) debln(i)
            i++;
        }
    }

    cout<<max_len<<endl;

    return 0;
}

/*
10
1 2 1 3 4 5 2 1 3 2
*/



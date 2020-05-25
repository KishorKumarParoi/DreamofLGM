//29-4-20
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
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl;}

/*
Time Calculation :
auto st = high_resolution_clock::now();
auto en = high_resolution_clock::now();
auto duration = duration_cast < milliseconds > (en-st);
cout<< "consumed time in ms " << duration.count() <<endl;
*/

int c;
char s[25];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;                      //test cases
    cin>>t;

    while(t--)
    {
        char n[15];             //nationality
        int a;
        cin>>a;
        cin>>n;

        c =0;
        while(a--)
        {
            cin>>s;              //input string
            if(strcmp("CONTEST_WON",s)==0)
            {
                int r;          //rank
                cin>> r;
                if(r<21)
                {
                    c+=300+20-r;
                }
                else
                    c += 300;
            }
            if(strcmp("TOP_CONTRIBUTOR",s)==0)
                c+=300;

            if(strcmp("BUG_FOUND",s)==0)
            {
                int sev;   //severity
                cin>>sev;
                c+= sev;
            }

            if(strcmp("CONTEST_HOSTED",s)==0)
                c+=50;

        }

        if(strcmp("INDIAN",n)==0)
        {
            cout<<c/200<<endl;
        }
        else
        {
            cout<<c/400<<endl;
        }

    }
    return 0;
}



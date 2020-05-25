//5-3-20
#pragma GCC optimize ("-O2")
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

template<typename T>
void print_old(vector<T>vec)
{
    for(int i=0; i< vec.size(); i++)
        cout<< vec[i]<<" ";
}
//  prints any type which supports iterators...
template <class T>
void print(T& c)
{
    for( typename T::iterator i = c.begin(); i != c.end(); i++ )
    {
        std::cout << *i << "\n";
    }
    cout<< "\n";
}
// void f(const vector< int >& v) {
// int r = 0;
// tr(v, it) {
// r += (it)(*it);
// }
// return r;
// }
typedef vector< int > vi;
typedef pair< int,int > pii;
typedef vector<string> vs;
typedef vector<vi> vv;
#define sz(a) int((a).size())
#define pb push_back
#define forn(n) for(int i =0 ; i< n; i++)
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define ll long long
const int inf = 1e9 +5;


int main()
{
    fastio;
    int t;
    cin>> t;
    int n, k, l;
    // int t = 1;
    while(t--)
    {
        cin >> n >> k;
        set<string>::iterator it;
        vector<string> dict;
        string s;
        for(int i = 0; i< n; i++)
        {
            cin >> s;
            dict.push_back(s);
        }
        // for(auto x : dict){
        //     cout << x << " ";
        // }
        // it = dict.find("rzotm");
        // cout << "\n" << *it << " " << *(it++);
        int m;
        string ss;
        set<string> temp;
        vector<set<int>> phrases;
        for(int i = 0; i< k; i++)
        {
            cin>> m;
            for(int j= 0; j < m; j++)
            {
                cin>> ss;
                temp.insert(ss);
            }
        }

        for(int i = 0; i < n; i++)
        {
            it = temp.find(dict[i]);
            if(it != temp.end())
            {
                cout << "YES"<< " ";
            }
            else
            {
                cout << "NO" << " ";
            }
        }
        cout<< "\n";

    }
    return 0;
}

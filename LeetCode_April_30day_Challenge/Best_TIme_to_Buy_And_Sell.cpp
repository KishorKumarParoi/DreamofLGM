#include<bits/stdc++.h>
using namespace std;
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;
const int INF = 1e9 + 5;

int maxProfit(vector<int>& prices)
{

    int best_without_stock = 0,best_with_stock = -INF;

    for(int x : prices)
    {
        best_with_stock = max(best_with_stock,best_without_stock - x);
        best_without_stock = max(best_without_stock,best_with_stock + x);

        //deb(best_with_stock) debln(best_without_stock)
    }
    return best_without_stock;
}

int main()
{
    int n,target;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<maxProfit(v)<<endl;
}

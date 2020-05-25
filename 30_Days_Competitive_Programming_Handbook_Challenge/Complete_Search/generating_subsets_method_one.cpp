#include<bits/stdc++.h>
using namespace std;

vector<int>subset;
int n;
#define print(v)  for(auto x : v) cout<<x<<" "; cout<<endl;

void search(int k)
{
    if(k==n)
    {
        return ;
    }
    else
    {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

int main()
{
    cin>>n;
    search(0);

    return 0;
}

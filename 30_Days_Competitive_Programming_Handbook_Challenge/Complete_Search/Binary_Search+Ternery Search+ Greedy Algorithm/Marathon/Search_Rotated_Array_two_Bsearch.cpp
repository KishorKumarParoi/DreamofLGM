#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums)
{

    int x = 0;
    for(auto a : nums)
        x^=a;
    return x;
}

int main()
{
    int n,target;
    cin>>n>>target;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<search(v,target)<<endl;
}

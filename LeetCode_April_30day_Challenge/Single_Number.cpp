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
    int n,i;
    cin>>n;

    vector<int>v(n);
    for(i=0; i<n; i++)
        cin>>v[i];

    cout<<singleNumber(v)<<endl;
}

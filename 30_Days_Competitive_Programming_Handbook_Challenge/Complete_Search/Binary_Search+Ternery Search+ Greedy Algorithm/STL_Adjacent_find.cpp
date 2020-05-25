#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int n,i;

int findPeakElement()
{
    auto peak = adjacent_find(v.begin(),v.end(),greater<>());
    if(peak==v.end())
    {
        --peak;
    }
    return *peak;
}
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<< "The peak element is : "<< findPeakElement()<<endl;

    return 0;
}

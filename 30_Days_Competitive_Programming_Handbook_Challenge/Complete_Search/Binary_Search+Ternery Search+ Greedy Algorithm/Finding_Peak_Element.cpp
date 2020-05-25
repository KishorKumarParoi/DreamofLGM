#include<bits/stdc++.h>
using namespace std;

int n,i;
vector<int>v;

int findPeakElement(int low,int high)
{
    int mid = (low+high)/2;

    if((mid==0|| v[mid-1]<=v[mid]) && (mid==n-1 || v[mid+1]<=v[mid]))
        return mid;

    if(mid-1>=0 && v[mid-1]>v[mid])
        return findPeakElement(low,mid-1);

    return findPeakElement(mid+1,high);
}

int main()
{
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;N
        cin>>x;
        v.push_back(x);
    }

    int idx = findPeakElement( 0,n-1);

    cout<<"Peak element is "<<v[idx]<<endl;

    return 0;
}

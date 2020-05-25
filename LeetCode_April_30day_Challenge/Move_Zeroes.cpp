#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums)
{

    int n=nums.size();
    int nxt=0;

    for(int x : nums)
    {
        if(x!=0)
        {
            nums[nxt] = x;
            nxt++;
        }
    }

    for(int i=nxt; i<n; i++)
        nums[i]=0;

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

    moveZeroes(v);
}

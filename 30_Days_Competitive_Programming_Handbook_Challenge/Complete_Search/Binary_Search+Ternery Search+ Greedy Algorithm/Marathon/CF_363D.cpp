//12-5-20
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define maxN 100005
ll n,m,A,i;
ll student[maxN],price[maxN];

bool possible(ll x)
{
    if(x>min(n,m))
        return 0;

    ll expected = 0,big=0;

    for(i=0; i<x; i++)
    {
        expected+=max(big,(price[i]-student[n-x+i]));
    }

    return expected<=A;
}

int main()
{

    cin>>n>>m>>A;
    for(i=0; i<n; i++)
        cin>>student[i];

    for(i=0; i<m; i++)
        cin>>price[i];

    sort(student,student+n);
    sort(price,price+m);

    ll low = 0, high = min(n,m)+1,mid;

    while(low<high)
    {
        mid = (high+low)>>1;

        if(possible(mid))
            low = mid+1;
        else
            high = mid;
    }

    ll people = low-1;

    ll expected_ans = -A;
    for(i=0; i<people; i++)
        expected_ans+=price[i];

    expected_ans = max(0ll,expected_ans);
    cout<<people<< " "<<expected_ans<<endl;

    return 0;
}

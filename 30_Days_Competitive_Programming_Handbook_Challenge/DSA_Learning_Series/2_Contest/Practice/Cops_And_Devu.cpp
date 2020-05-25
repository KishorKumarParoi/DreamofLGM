#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tc,M,x,y,house,i;
    cin>>tc;

    while(tc--)
    {
        cin>>M>>x>>y;

        ll chk[110];
        for(i=1; i<=100; i++)
            chk[i]=0;

        ll range = x*y;
        while(M--)
        {
            cin>>house;
            for(i=house-range; i<=house+range; ++i)
            {
                if(i>=1 && i<=100)
                    chk[i]=1;
            }
        }

        ll cnt=0;
        for(i=1; i<=100; i++)
            if(!chk[i])
                cnt++;

        cout<<cnt<<endl;
    }
    return 0;
}

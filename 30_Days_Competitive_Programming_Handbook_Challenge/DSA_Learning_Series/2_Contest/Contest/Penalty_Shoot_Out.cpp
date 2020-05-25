//3-5-20
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll tc,n,i;
    cin>>tc;

    while(tc--)
    {
        cin>>n;
        n*=2;

        string s;
        cin>>s;

        ll cnt1=0,cnt2=0,score1=0,score2=0;
        ll ans = n;

        for(i=0; i<n; i++)
        {
            if(i%2==0)
            {
                cnt1++;
                if(s[i]=='1')
                    score1++;
            }
            else
            {
                cnt2++;
                if(s[i]=='1')
                    score2++;
            }

            if(score1-score2>(n/2-cnt2) || score2-score1>(n/2-cnt1))
            {
                ans = i+1;
                break;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

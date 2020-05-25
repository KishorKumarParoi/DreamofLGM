//11-5-20
#include<bits/stdc++.h>
using namespace std;
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;

int daywalk[1111],tc,n,k,i,kase=1;

bool possible(int expected)
{
    int curr_day_walk=0,part=0;

    for(i=0; i<n; i++)
    {
        curr_day_walk+= daywalk[i];

        if(curr_day_walk>expected)
        {
            part++;
            curr_day_walk = daywalk[i];
        }
    }

    part++;

    return (part<=k);
}

int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin>>tc;

    while(tc--)
    {
        cin>>n>>k;
        n++,k++;

        int high=0,low=-1;
        for(i=0; i<n; i++)
        {
            cin>>daywalk[i];
            high+=daywalk[i];

            if(low<daywalk[i])
                low = daywalk[i];
        }

        int expected_max_walk = high;

        while(low<=high)
        {
            int mid = (high+low)>>1;

            if(possible(mid))
            {
                expected_max_walk  = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }

        printf("Case %d: %d\n",kase++,expected_max_walk);

        int part = k,curr_day_walk=0;

        for(i=0; i<n; i++)
        {
            curr_day_walk+=daywalk[i];

            if(curr_day_walk>expected_max_walk || n-i+1==part)
            {
                part--;
                curr_day_walk-=daywalk[i];

                //deb(part) deb(curr_day_walk+daywalk[i])  deb(curr_day_walk) debln(daywalk[i])
                printf("%d\n",curr_day_walk);
                curr_day_walk = daywalk[i];
                //debln(curr_day_walk)
            }
        }

        printf("%d\n",curr_day_walk);
    }
    return 0;
}

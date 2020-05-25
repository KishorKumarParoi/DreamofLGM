//11-5-20 6.55pm
#include<bits/stdc++.h>
using namespace std;

int camp[1100],n,k,i,j;

bool possible(int expected_ans)
{

    int current_walk=0,part=0;

    for(i=0; i<n; i++)
    {
        current_walk+=camp[i];

        if(current_walk>expected_ans)
        {
            part++;
            current_walk = camp[i];
        }
    }

    part++;
    if(part<=k)
        return true;
    else
        return false;
}

int main()
{
    int tc,kase=1;
    cin>>tc;

    while(tc--)
    {
        cin>>n>>k;
        n++,k++;

        int high=0,low=-1;

        for(i=0; i<n; i++)
        {
            cin>>camp[i];
            high+=camp[i];       //maximum walk can be total sum
            if(low<camp[i])
                low = camp[i];    //minimum walk should be maximum daywalk
        }

        int expected_max = high;

        while(low<=high)
        {
            int mid = (high+low)>>1;

            if(possible(mid))
            {
                expected_max = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }

        printf("Case %d: %d\n",kase++,expected_max);

        int part = k,current_walk=0;

        for(i=0; i<n; i++)
        {
            current_walk+=camp[i];

            if(current_walk>expected_max || n-i+1==part)
            {
                part--;
                current_walk-=camp[i];
                printf("%d\n",current_walk);
                current_walk = camp[i];
            }
        }

        printf("%d\n",current_walk);
    }
    return 0;
}

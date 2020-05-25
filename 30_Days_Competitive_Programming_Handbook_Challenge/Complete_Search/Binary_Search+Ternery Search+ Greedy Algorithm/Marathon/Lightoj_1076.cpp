//11-5-20
#include<bits/stdc++.h>
using namespace std;

//Debug Macros
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;


int n,m,milk_capacity[1111],i;

bool possible(int expected)
{
    int curr_capacity=0,part=0;

    for(i=0; i<n; i++)
    {
        curr_capacity+=milk_capacity[i];

        if(curr_capacity>expected)
        {
            part++;
            curr_capacity = milk_capacity[i];
            //deb(part) deb(curr_capacity) deb(milk_capacity[i]) debln(expected)
        }
    }

    part++;
    if(part<=m)
        return true;
    else
        return false;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int kase=1;

    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        int high=0,low=-1;

        for(i=0; i<n; i++)
        {
            cin>>milk_capacity[i];
            high+=milk_capacity[i];

            if(low<milk_capacity[i])
                low=milk_capacity[i];
        }

        int expected_max_capacity = high;

        while(low<=high)
        {
            int mid = (high+low)>>1;

            if(possible(mid))
            {
                expected_max_capacity = mid;
                high = mid-1;
            }
            else
                low = mid + 1;
        }

        printf("Case %d: %d\n",kase++,expected_max_capacity);

    }

    return 0;
}

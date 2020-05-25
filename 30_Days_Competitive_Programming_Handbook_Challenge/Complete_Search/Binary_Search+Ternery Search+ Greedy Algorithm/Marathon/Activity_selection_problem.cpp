#include<bits/stdc++.h>
using namespace std;

struct habijabi
{
    int start_time,end_time;
}work[110];

bool cmp(habijabi A,habijabi B)
{
    if(A.end_time==B.end_time)
        return A.start_time < B.start_time;
    return A.end_time< B.end_time;
}

sort(work,work+total,cmp);        //end time basis sort
int Ans = 0,prev_end = -1;       // Always small for first slot

for(i=0;i<total;i++)
{
    if
}

int main()
{

    return 0;
}

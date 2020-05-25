#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll  rand(ll  a,ll  b)
{
    return a + rand() % (b-a+1);
}

int main(ll  argc,char* argv[])
{
    srand(atoi(argv[1]));    // atoi converts an array if chars to ll

    for(ll i=0; i<20; ++i)
    {
        ll n = rand(1,1000000000);
        ll k = rand(1,100);

        printf("%lld %lld\n",n,k);
    }
    puts("");
}


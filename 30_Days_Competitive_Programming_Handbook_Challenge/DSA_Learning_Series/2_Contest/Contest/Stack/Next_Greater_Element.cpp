#include<bits/stdc++.h>
using namespace std;

int n,i;
vector<int>v;

void printNGE()
{
    stack<int>s;
    s.push(v[0]);

    for(i=1; i<n; i++)
    {
        if(s.top()<v[i])
        {
            cout<<s.top()<<"----"<<v[i]<<endl;
            s.pop();
            s.push(v[i]);
        }
        else
        {
            s.push(v[i]);
        }
    }

    while(s.empty()==false)
    {
        cout<<s.top()<<"---"<<-1<<endl;
        s.pop();
    }
    cout<<endl;
}

int main()
{
    cin>>n;

    for( i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    printNGE();

    return 0;
}

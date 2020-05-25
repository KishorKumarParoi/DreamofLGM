#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1;
}

void InfixToPostFix(string s)
{
    stack<char>st;
    st.push('N');
    string ans;

    for(int i=0; i<(int)s.size(); i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            ans+=s[i];

        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.top()!='N' && st.top()!='(')
            {
                char c = st.top();
                st.pop();
                ans+=c;
            }
            if(st.top()=='(')
            {
                st.pop();
            }
        }
        else
        {
            while(st.top()!='N'&& prec(s[i])<=prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ans+=c;
            }
            st.push(s[i]);
        }
    }

    while(st.top()!='N')
    {
        char c = st.top();
        st.pop();
        ans+=c;
    }

    cout<<ans<<endl;
}

int main()
{

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;

        InfixToPostFix(s);
    }
    return 0;
}

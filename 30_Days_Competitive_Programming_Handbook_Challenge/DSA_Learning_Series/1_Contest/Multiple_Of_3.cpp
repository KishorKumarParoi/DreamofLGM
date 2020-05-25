// 01-05-20
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a)                         cout << #a << " : " << a << " ";
#define debln(a)                       cout<< #a <<" : " << a << endl;

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll k,d0,d1;
        cin>>k>>d0>>d1;

        if(k==2)
        {
            if((d0+d1)%3==0)
                puts("YES");
            else
                puts("NO");
            continue;
        }

        ll lastDigit = (d0+d1)%10;
        ll sum = d0+d1+lastDigit;

        ll remDigits = k-3;

        while(remDigits>0)
        {
            if(lastDigit==0)
            {
                remDigits=0;
                break;
            }
            else if(lastDigit==6)
            {
                ll sets = remDigits/4;
                sum+= (sets*20);

                remDigits-=(4*sets);

                //deb(sets) deb(sum)
                if(remDigits==1)
                    sum+=2;
                else if(remDigits==2)
                    sum+=6;
                else if(remDigits==3)
                    sum+=14;

               // deb(sum) debln(remDigits)
                remDigits=0;
                break;
            }

            else
            {

                lastDigit = (lastDigit*2)%10;
                sum+=lastDigit;
                remDigits--;

                //deb(lastDigit) deb(sum) debln(remDigits)
            }
        }

        if(sum%3==0)
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }
    return 0;
}

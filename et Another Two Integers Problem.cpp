#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int a,b,k,temp,ans=0;
    while(t--)
    {
        cin>>a>>b;

        if(a>b && a>10){temp = (a-b)/10; ans=ans+temp; a = a - (temp*10);} /// Otherwise, TIME LIMIT EXCEED !!!

        if(a<b && b>10) {temp = (b-a)/10; ans = ans+temp; a = a + (temp*10);}



        for(k=10;k>0;k--)
        {
           if(a<b && a+k<=b){a=a+k; ans++; k++; if(a==b){break;}} /// Because, 10 akbar use hole, aro use kora jete pare!!!!!

            if(a>b && a-k>=b) {a=a-k; ans++; k++;  if(a==b){break;}} /// karon break na korle loop choltei thake

        }

        cout<<ans<<"\n";
        ans=0;

    }



    return 0;
}

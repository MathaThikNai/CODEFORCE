#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=0,b=0;
        while(n--)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                b+=x;
            }
            else
            {
                a+=x;
            }
        }
        if(b>a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
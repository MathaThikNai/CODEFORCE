//Money can buy happiness. Dont fool by foolish qoutes.
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    // }
 
    long long int n;
    cin>>n;
    long long int sum;
    if(n%2==0)
    {
        sum=n/2;
        cout<<sum;
    }
    else
    {
        sum=(-((n+1)/2));
        cout<<sum;
    }
}
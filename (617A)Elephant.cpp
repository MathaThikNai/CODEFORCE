
//Your patience is your power
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,ans;
    cin>>x;
    ans=x/5;
    if(x%5!=0)
    {
        ++ans;
    }
    cout<<ans<<endl;
}
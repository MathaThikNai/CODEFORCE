//Why do you worry in life where allah is the controller.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int f=1;
        for(int i=0; i<n;i=i+2)
        {
            for(int j=1;j<n;j=j+2)
            {
                if(s[i]==s[j])
                {
                    f=0;
                }
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
//Nobody sctuslly knows the real me, they just know the version of me i choose to show them.
#include<bits/stdc++.h>
using namespace std;

int main()
{   
   map<string, int> freq;
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
    string s;
    cin>>s;
    if(freq[s]==0)
    {
        cout<<"OK"<<endl;
    }
    else
    {
        cout<<s<<freq[s]<<endl;
    }
    freq[s]++;
   }

}
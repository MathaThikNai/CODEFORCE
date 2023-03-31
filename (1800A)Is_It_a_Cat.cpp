//I don't trust words, i trust vibes. People can tell you anything, but a vibe will tell you everything.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    regex c("[mM]+[eE]+[oO]+[wW]+");
    smatch b;
    string a;
    int t,k;
    cin>>t;
    while(t--)
    {
      cin>>k>>a; //Attention
      cout<<(regex_match(a,b,c)?"YES":"NO")<<endl; //Attention
    }
}
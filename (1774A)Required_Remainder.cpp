//You can miss something but not want it back.
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int p,n,y,x,k;
        cin>>x>>y>>n;
        p=((n-y)/x);
        k=p*x+y;
        cout<<k<<endl;
    }

    return 0;
}
//No one really knows how to move on. It's just one of those things you have to figure out on your own. 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    // int n;
    // cin >> n;
    // while (n--)
    // {
        
    // }
    int x, k,i,a[100000],c=0;
    cin>>x>>k;
    
    for (i=0;i<x;i++)
    {
        cin>>a[i];
        
    }
    for(i=0;i<x;i++){
        if(a[i]>=a[k-1]&&a[i]>0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
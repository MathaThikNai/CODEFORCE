#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;


     cin>>t;
     cin.ignore();

     while(t--)
     {
         long long n,k;
             cin>>n>>k;
         string s="";

         for(char i='a';i<'a'+k; i++)
         {
             s+=i;

         }
         for(int i=0; i<n; i++){
            cout<<s;
         }
cout<<endl;

     }
    return 0;
 }


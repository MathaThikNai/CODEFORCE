#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;


     cin>>t;

     while(t--)
     {
         int digits;
         cin>>digits;
         int arr[digits];
         for(int i=0; i<digits; i++)
         {
             cin>>arr[i];
         }

         int minval= *min_element(arr,arr+digits);

         for(int i=0; i<digits; i++)
         {

             if(arr[i]== minval){
                arr[i]++;
                break;
             }
         }
         long long product=1;
         for(int i=0;i<digits;i++)
            {
                product*=arr[i];
            }

            cout<<product<<endl;

        }
        return 0;
     }


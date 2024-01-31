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

        vector<int> arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        double sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        double a =sqrt(sum);
        if (a == static_cast<int>(a)) {
        cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
     }



 }


#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t,i,j;


     cin>>t;

     while(t--)
     {
         char i,j,q1,q2;
        char matrix[3][3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>> matrix[i][j];

                if(matrix[i][j]=='?')
                {
                    q1=i;
                }
            }
        }
        bool a= false;
        bool b= false;
        bool c= false;
        for(int i=0;i<3; i++){
            if(matrix[q1][i]=='A') {
                a=true;
            }
            else if(matrix[q1][i]=='B')
            {
                b=true;
            }
            else if(matrix[q1][i]=='C'){
                c=true;
            }

        }
        if(c==false)
            cout<<"C"<<endl;
        else if(b==false)
            cout<<"B"<<endl;
        else
            cout<<"A"<<endl;


     }


 }


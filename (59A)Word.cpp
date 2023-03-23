//Be careful. The devil can hear your prayer too.. He doesnt always come with horns and pitch or fork. Sometimes he comes dressed up like everything you ever wanted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count1=0,count2=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1<count2)
    {
        for(int i=0;i<s.size();i++)
        {s[i]=toupper(s[i]);}
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {s[i]=tolower(s[i]);}
    }
    cout<<s<<endl;
}
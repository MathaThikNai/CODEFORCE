//Being alone really makes you realize all you got is yourself...
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,result="";
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        char letter = tolower(s[i]);
        if(letter == 'a'||letter =='e'||letter == 'i'||letter =='o'||letter == 'u'||letter =='y')
        {
            continue;
        }
        else
        {
            result += ".";
            result +=letter;
        }
    }
cout<<result<<endl;
    return 0;
}
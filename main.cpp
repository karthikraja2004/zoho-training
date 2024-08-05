#include<bits/stdc++.h>
#include<string>
using namespace std;
int isSubstring(string s1,string s2)
{
   size_t pos=s1.find(s2);
   if(pos!=string::npos)
   {
       return pos;
   }
   else
   {
       return -1;
   }
    
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<isSubstring(s1,s2);
    return 0;
}
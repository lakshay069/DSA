#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1="acef";
  for(int i=0;i<s1.size();i++)
{
    if(s1[i]>='a'&&s1[i]<='z'){
        s1[i]-=32;
    }
}
cout<<s1<<endl;
    return 0;
}

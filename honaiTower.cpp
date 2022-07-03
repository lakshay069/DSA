#include<bits/stdc++.h>
using namespace std;
int toh(int n,char a,char b,char c){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<"move disk from "<<a<<" "<<"to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
    int main(){
        int n;
        char a,b,c;
        cin>>n>>a>>b>>c;
        toh(n,a,b,c);
        return 0;
        }
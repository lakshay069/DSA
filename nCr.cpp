#include<bits/stdc++.h>
using namespace std;
int c(int n,int r){
    if(r==0||r==n)
    return 1;
    return c(n-1,r-1)+c(n-1,r);
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<c(n,r)<<endl;
    return 0;
}
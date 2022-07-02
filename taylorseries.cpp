#include<bits/stdc++.h>
using namespace std;
int e(int x,int n){
    static int p=1,f=1;
     int r;
    if(n==0)
    return 1;
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
     //static int p=1;
   //if(n==0)
    //return p;
    //p=1+x/n*p;
   //return e(x,n-1);
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<e(x,n)<<endl;
    return 0;
}
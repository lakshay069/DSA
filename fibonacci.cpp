#include<bits/stdc++.h>
using namespace std;
int F[10];
int fib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-1]==0)
            F[n-1]=fib(n-1);
        if(F[n-2]==0)
            F[n-2]=fib(n-2);
    }
            return F[n-1]+F[n-2];

}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long int mod=1000000007;
    long long modfun(long long n, long long R)
    {   
        if (n == 0) 
            return 0;
        if (R == 0)  
            return 1;
        long long y;
        if (R % 2 == 0) { 
            y = modfun(n, R/2);  
            y = (y * y) % mod; 
        }
        else { 
            y = n % mod; 
            y = (y * modfun(n, R - 1) %mod) % mod;    
        }
        return ((y + mod) % mod);  
    }
    long long power(int N,int R)
    {
        return modfun(N,R)%mod;   
    }
};
 long long rev(long long n)
 {long long rev_num = 0; 
while(n > 0){
   rev_num= rev_num *10+ n%10;
    n = n/10;
} return rev_num;
}
 int main()
{
int T;
 cin>>T;
 while(T--){
long long N;
cin>>N;
long long R= 0;
R=rev(N);
Solution ob;
long long ans=ob.power(N,R);
cout << ans<<endl;
}
}
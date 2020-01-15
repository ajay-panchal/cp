#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 10000007 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long BinaryExpon(long long x, long long y){
    x %= MOD;
    long long res =1;
    while(y>0){
        if(y&1)
            res=res*x % MOD;
        x=x*x % MOD;
        y>>=1;
    }
    return res;
}
int32_t main(){
   IOS
    int x,y;
   while(cin>>x && cin>>y && x!=0 && y!=0){
      cout<<((2 * BinaryExpon(x-1,y) )+ (2 * BinaryExpon(x-1,x-1) )+ BinaryExpon(x,y) + BinaryExpon(x,x) )%MOD<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

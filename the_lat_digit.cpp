#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 10e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long BinaryExpon(long long x, long long y){
    x %= 10;
    long long res =1;
    while(y>0){
        if(y&1)
            res=res*x % 10;
        x=x*x % 10;
        y>>=1;
    }
    return res%10;
}
int32_t main(){
   IOS
    int x,y,t;
   cin>>t;
   while(t--){
       cin>>x>>y;
      cout<<BinaryExpon(x,y)<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

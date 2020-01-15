#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long BinaryExpon(long long x, long long y, long long n){
    x%=n;
    long long res =1;
    while(y>0){
        if(y&1)
            res=res*x%n;
        x=x*x%n;
        y>>=1;
    }
    return res%n;
}
int32_t main(){
   IOS
   int t;
   cin>>t;
   while(t--){
       int x,y,n;
       cin>>x>>y>>n;
       cout<<BinaryExpon(x,y,n)<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

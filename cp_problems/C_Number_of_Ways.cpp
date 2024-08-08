#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll const N = 5* 1e5 +3;

ll n ;
ll memo [N][5];
ll sizo ;
ll dp(ll i , ll co ,ll arr[]){
  //  cout << arr[i] << " "<< co <<  "\n";
   if(co == 3 && (arr[i] == sizo*3 && i == n-1)){ return 1;}
   if(i >=n -1 ) return 0;

   ll &ret = memo[i][co];
   if(~ret)return ret; ret = 0;
   if(arr[i] == co*sizo) ret +=dp(i+1,co+1,arr);
   ret += dp(i+1, co,arr);


   return ret;

}

int main() {

    ll t = 1; while (t--)
    {
          memset(memo, -1,sizeof(memo));
          cin >> n;

          ll arr[n];
          for(ll i =0 ;i < n;i++) cin >> arr[i];
          for(ll i = 1;i<n;i++) arr[i] = arr[i] + arr[i-1];

          ll last = arr[n-1];
          sizo = last/3;

          if(n <3 || (last%3) ){
            cout << 0 << "\n";
          }else  {

             cout << dp(0,1,arr) << "\n";
          }
   
    }
    

}
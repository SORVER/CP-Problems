#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll ok (ll a, ll b, ll c , ll d){

     ll ans = 0;

     if(a>b)ans++;
     if(b>a) ans--;
     if(c > d) ans++;
     if(c < d) ans--;

   

     if(ans > 0) return 1; return 0;
}
int main(){


   ll t; cin >> t; while(t--){
      
      ll arr1[2]; ll arr2[2]; cin >>arr1[0] >>  arr1[1]; cin >>arr2[0] >>  arr2[1];

       ll vis1[2] = {0};
       ll vis2[2] = {0};

      
      ll ans = 0;
      for(ll i =0 ;i < 2; i++){
           
         for(ll j = 0;j < 2; j++){ 
         

         
            
             ans += ok(arr1[i], arr2[j] , ( (arr1[0]^arr1[1])^arr1[i] ),  ( (arr2[0]^arr2[1])^arr2[j] )  );


      


         }
                   


      }

      cout << ans << "\n";


        
   }
}
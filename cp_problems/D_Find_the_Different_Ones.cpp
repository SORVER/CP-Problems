#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

   ll t ; cin >>t; while(t--){

       ll n;
       cin >> n;

      ll arr[n]; ll arr2[n];

      for(ll i=0;i < n;i++){ cin >>arr[i]; arr2[i] =arr[i];}
         
      for(ll i =1 ;i <n;i++) arr[i] = (arr[i-1]^arr[i]);

      ll mix[n];
      mix[n-1] = -1;

      for(ll i = n-2;i != -1;i--){
         if(arr2[i+1] != arr2[i] ) mix[i] = i+1;
         else mix[i] = mix[i+1];

      }







      ll q; cin>>q;

      while(q--){ // l == r


         ll l, r; 
         cin >> l >> r;
           l--;r--;
          

         
         if( ((r -l +1)&1)  && (mix[l] == -1 || ( arr2[mix[l]] == arr2[l]  ) || mix[l] > r) ){
                     cout << "-1 -1\n";
         }else if(((r -l +1)&1)){
                     
                    cout << l +1 << " " << mix[l] +1 << "\n";

         }else if(mix[l] == -1 ||mix[l] > r ) {
                  cout << "-1 -1\n";
         }else {
                cout << l+1 << " " << mix[l] +1 << "\n";

         }
        
      }  cout << "\n";

   }  

   
}
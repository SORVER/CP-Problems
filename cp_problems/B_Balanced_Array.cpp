#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

   ll t ; cin >>t; while(t--){

       ll n;
       cin >> n;


      long double y = log2(n);

      if(  n == 2 || (n&1)){
          cout << "NO\n";
      }else if(((n/2)&1) ){
            cout << "NO\n";

      } else {
         cout << "YES\n";
         vector<ll> ev;
         vector<ll>odd;

         ev.push_back(2); ev.push_back(4);
         odd.push_back(1); odd.push_back(5);
         n-=4;

         if(n){
            ll maxi = 6;

            while(n){
               n-=4;
               ev.push_back(2+maxi); ev.push_back(4+maxi);
               odd.push_back(1+maxi);         odd.push_back(5+maxi);
               maxi+=6;

            }
         }

         for(ll i =0 ;i <ev.size();i++){
            cout << ev[i] << " ";
         }
         
         for(ll i =0 ;i <odd.size();i++){
            cout << odd[i] << " ";
         }
         cout << "\n";


      }

   }  

   // output: 1 2 3 4 6 9 12 18 36
}
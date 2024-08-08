#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
       ll n ; cin >> n;
     ll arr[n];
       for(ll i =0 ;i  <n;i++){
      
         cin >> arr[i];

       }

       long long co = 1;
       while(co <pow(2,63)){
       
         map<ll,ll> pp;
                for(ll i =0 ;i  <n;i++){
                  pp[(arr[i]%co )]=1;
       } 
        if(pp.size() == 2){cout << co<<"\n";break;} co<<=1LL;


         
       }

       


        
   }
}
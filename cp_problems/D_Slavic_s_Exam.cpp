#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
      
        ll l , r; 
        cin >> l >> r;
         ll la = l;
          ll ans = 0;
        while(l){
          ans++;
         l/=3;
        }
        l++;

        while(l%3 !=0 && r>l){
           ll lb = l;
                  while(lb){
          ans++;
         lb/=3;
        }
        
   
         l++;
        }



        
   }
}
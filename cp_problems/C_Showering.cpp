#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
      ll n , s ,m ;
      cin >> n >> s >> m;
       vector<pair<ll, ll> > pp ;
      while(n--){

          ll l , r ;
          cin >> l >> r;
         pp.push_back({l,r});
         

      }
         vector<ll> good;
         good.push_back(pp[0].first - 0);
         good.push_back(m - pp[pp.size() -1].second );
        for(ll i = 1 ;i < pp.size();i++){
             good.push_back(pp[i].first - pp[i -1].second);
        }
       ll co = 0;
        for(ll i = 0 ;i < good.size();i++){

         if(good[i] >= s) co = 1;
        }

        if(co) cout << "YES\n"; else cout << "NO\n";

        
   }
}
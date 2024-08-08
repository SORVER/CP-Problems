#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
       ll q ; cin >> q;
      ll U = 0, D = 0 , R = 0, L = 0;
       while(q--){
         ll l , r; cin >> l >> r;

         



         if(l > 0 )U++;
         if(l < 0) D++;
         if( r > 0) R++;
         if(r < 0) L++;
       }
       

       if(U && D && R && L){cout << "NO\n";}
       else {cout << "YES\n";}


        
   }
}
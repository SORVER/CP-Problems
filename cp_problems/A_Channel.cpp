#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
       ll n , on , noti;
       cin >> n >> on >> noti;

       ll co = on;
      
       ll yes =0;
       if(co == n) yes = 1;
       ll pos = 0;
       while(noti--){
          char ch ; cin >> ch;
          if(ch == '+'){co++;if(co == n) yes = 1; pos++;}
          else {co--;}
         
       }

       if(yes) cout << "YES\n";
       else if(on + pos < n) cout << "NO\n";
       else cout << "MAYBE\n";


        
   }
}
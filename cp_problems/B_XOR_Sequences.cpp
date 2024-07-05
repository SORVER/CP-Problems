   #include <iostream>
   #include <bits/stdc++.h>
   #define ll long long
   using namespace std;

   int main(){

      ll t; cin >> t; while(t--){

         ll x , y; cin >> x >> y;

         ll ans = (x^y);
         ll co  = 0;
         while((ans&1) != 1 ){ ans/=2; co++;}
         co = pow(2,co);
         cout << co << "\n";
         
         }

   }

   /*
   * stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
   */
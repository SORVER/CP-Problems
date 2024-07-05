#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

   ll t ; cin >>t; while(t--){

       string ss ; cin >> ss;
          
       ll eq = 0;

       for(ll i =1 ;i<ss.size();i++){
            if(ss[i] == ss[0] ) eq++;
       }

       if(eq + 1 == ss.size()){
         cout << -1 << "\n";
       }else cout << ss.size() -1 << "\n";
   }

   // output: 1 2 3 4 6 9 12 18 36
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long


 ll n;

   ll dp(ll i, ll flag, ll flag2, ll arr[]){

         if( i == n && flag2 == 1) return 0;
         if(i ==n && flag2 == 0) return 1e3;
         

         ll ch1 =dp(i+1, flag,flag2,arr) 

   }


int main() {


    ll t; cin >> t; while (t--)
    {
           cin >> n ; ll arr[n];

           if(n == 2){
            ll y; cin >> y; cout << y << "\n"; continue;
           }

           for(ll i = 0 ;i < n;i++){char ch ; cin >> ch ; arr[i] = ch -'0';}

           cout << min( dp(1,0,0,arr), dp(1,1,0, arr));

         
         
    }
    

}
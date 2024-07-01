# include <iostream>
# define ll long long

#include <bits/stdc++.h>
using namespace std ;


int main (){



       ll t; 
       cin >> t;
          

       while (t--){

         ll n , m ; 
         cin >> n >>m;
         if(n ==0 and m ==0){cout << 0 << "\n"; continue;}

         ll l = max(0ll, n-m);

         ll r = m + n;

         ll ans = 0;
         for(ll i = 0;i< 32;i++){
             if( n+m - max(0ll,n-m) +1 >= pow(2,i)+1 ){
      
               ans= (ans | (1 << i)); 

             } else if(  ((1 << i) & l )  || ((1 << i) &  r)  ){
                ans= (ans | (1 << i));  
                
             }
         }
  
         cout << ans << "\n";




              

       }
}
# include <iostream>
# define ll long long
#include <bits/stdc++.h>


using namespace std ;


int main (){



       ll t; 
       cin >> t;


       while (t--){
         ll n ;
         cin >> n ;

         ll arr[n];
         for(ll i =0 ;i < n ;i++){
               cin >> arr[i];
         }


         sort(arr, arr +n);
         if(n == 1) {cout << 1 << "\n"; continue;}
           ll co =0 ;


           ll sh =0;
           if(n%2 != 0) sh =0; else sh =1;
         for(ll i =(n/2 -sh) ;i < n ;i++){
          
          if(arr[i] == arr[(n/2) - sh]){  co++;}
          
         }

        
         cout << co << "\n";


       }
}
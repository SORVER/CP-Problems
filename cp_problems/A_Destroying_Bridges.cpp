# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;

int main (){



       ll t; 
       cin >> t;


       while (t--){
  
                 ll n , k ;
                 cin >> n >> k;
                 
                 if(k>= n-1){
                    cout << 1 << "\n";

                 } else {
                    cout << n << "\n";
                 }

       }
}
# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;

int main (){



       ll t; 
       cin >> t;


       while (t--){
  
                 ll a,b , k ;
                     cin >> a >> b >> k;
                    k++;
                 ll ans = k/a + k/b;

                 if(k%a != 0) ans++;
                 if(k%b != 0) ans++;
                 cout << ans << "\n";

       }
}
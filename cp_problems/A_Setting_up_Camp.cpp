# include <iostream>
# define ll long long
#include <bits/stdc++.h>


using namespace std ;


int main (){



       ll t; 
       cin >> t;


       while (t--){
  

          ll x , y ,z ;

          cin >> x >> y >> z;

          ll co = x;

          if(y%3 != 0){

               if(3 - y%3 <=z){
             
                co+= ((3 - y%3 ) + y ) /3 ;
                z-= (3 - y%3 );

                co += z/3 ;
                if(z%3 != 0) co++;

                cout << co << "\n";

               } else {

                cout << -1 << "\n";
               }
          }else {

                  co += z/3 ;
                if(z%3 != 0) co++;
                co+= y/3; 

                cout << co << "\n";
          }
           


       }
}
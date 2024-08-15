# include <iostream>
# define ll long long

#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

using namespace std ;


unsigned ll dist(ll x ,ll y , ll x1 , ll y1 ){
     unsigned ll ditx = (x1 -x)*(x1 -x);
     unsigned ll dity = ( y1 - y)*( y1 - y);

     unsigned ll ans = ditx + dity;
     return ans;
}

int main (){
        FAST
       ll t; cin >> t; while (t--){
            ll n ; cin >> n; ll arr[n];

            for(ll i = 0 ;i < n;i++){

               cin >> arr[i];
            }


            ll l = arr[0] -1; ll r = arr[0] +1;

             ll fl = 1;
            for(ll i = 1 ;i < n;i++){

               if(arr[i] == l){
                   l--;
               }else if (arr[i] == r){
             r++;

               } else {
                  fl = 0;
                  cout  << "NO\n";break;
               }

            }

            if(fl) cout << "YES\n";
            

       }
}
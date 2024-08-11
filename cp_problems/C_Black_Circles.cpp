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
            ll n ;cin >> n;
             vector<pair<ll,ll>> circles;
             
             for(ll i= 0 ;i < n;i++){

               ll l , r ; cin >> l >> r;
               circles.push_back({l,r});

             }
             
             ll xs, ys, xe, ye;
             cin >> xs >> ys >> xe >> ye;
            
            unsigned ll disto = dist(xs,ys,xe,ye);
            

            bool fl = false;  
            for(ll i =0 ;i < n;i++){
                 unsigned ll p = dist(circles[i].first,circles[i].second,xe,ye);
                 if(p <= disto )
                 {fl = true;}
            }
         
            if(fl) cout << "NO\n"; else cout << "YES\n";



            

       }
}
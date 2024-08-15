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
             ll q ; cin >> q;


             while(q--){

               string ss ; cin >> ss;
               ll fl = 1;
               if(ss.size() == n){

                  map<ll,char> pp; 

                  for(ll i =0 ;i < n;i++){

                     if(pp.find(arr[i]) == pp.end()){
                              pp[arr[i]] = ss[i];
                     }else if (pp[arr[i]] != ss[i]) {
                             fl = 0;
                     }
                  }

                  map<char,ll> dd;
                     for(ll i =0 ;i < n;i++){

                     if(dd.find(ss[i]) == dd.end()){
                              dd[ss[i]] = arr[i];
                     }else if (dd[ss[i]] != arr[i]) {
                             fl = 0;
                     }
                  }


                  for(auto& x: dd){
                      if(x.first != pp[x.second]) fl = 0;
                  }





                   
               }else {

                    fl = 0;

               }

               if(fl) cout << "YES\n" ; else cout << "NO\n";
             }
       }
}
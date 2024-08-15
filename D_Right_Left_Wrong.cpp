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

            for(ll i =1 ;i < n;i++) arr[i]+=arr[i-1];
            string ss ; cin >> ss;
 
             ll sum = 0;
             ll l = 0, r = n-1;
            while(l<r){

                 if(ss[l] == 'R'){ l++; continue;}
                 if(ss[r] == 'L'){r--; continue;}

               if(l > 0){
                  sum += arr[r] - arr[l -1];
                  l++;r--;
               }else {
                  sum+= arr[r];
                  l++;r--;
               }
                  
            }

            cout << sum << "\n";
             
       }
}
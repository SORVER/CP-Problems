# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;


int main (){



       ll t; cin >> t; while (t--){
            ll n ;cin >> n;
             vector<ll> a(n);
             vector<ll> b(n);

             for(ll i =0 ;i< n ;i++) cin >> a[i]; for(ll i =0 ;i< n ;i++) cin >> b[i];

            vector <ll> c(n);
            for(ll i =0 ;i <n;i++){
               c[i] = b[n-i-1];
            }

             if(a == b || a == c) cout << "Bob\n"; else cout << "Alice\n"; 

            

       }
}
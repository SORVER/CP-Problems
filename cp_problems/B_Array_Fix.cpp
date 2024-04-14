# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;




int main(){


    ll t ;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];


        for(ll i =0 ; i < n ;i++){
            cin >> arr[i];
        }
        ll vis[n+1];
        vector <ll> pp;
        pp.push_back(arr[n-1]);
        for(ll i =n-2 ;i != -1 ;i--){
            ll k = arr[i+1];
            if(vis[i+1]){
                k = pp[pp.size() -1];
            }
            if(arr[i] > k){
                ll x = arr[i]; vis[i] = 1;
                while(x){
                    pp.push_back(x%10);
                    x/= 10;
                }
            }else {
                vis[i] = 0 ;
                pp.push_back(arr[i]);
            }
        }
        reverse(pp.begin(),pp.end());

        vector<ll>pt = pp;
        sort(pt.begin(), pt.end());
        if(pt == pp) cout << "YES\n";
        else cout << "NO\n" ;
    }

}
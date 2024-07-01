# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;


void tryt(vector <ll> arr){
           
           vector <ll> arr2 = arr;
           arr2[0] = (arr[0]| arr[1]);
           cout << arr2[0] << ", ";

           for(ll i = 1;i < arr2.size() -1;i++){
                     arr2[i] = ((arr[i-1]| arr[i]) | arr[i+1]);
                     cout << arr2[i] << ", ";
           }
}
int main (){



       ll t; cin >> t; while (t--){
           ll n;
           cin >> n; ll arr[n];
           ll maxi = 1;
           for(ll i =0 ;i < n;i++) {cin >> arr[i]; if(i != n-1) maxi = max(maxi,arr[i]);}

           ll ans = arr[n-1] + maxi;
           cout << ans << "\n";


       }
}
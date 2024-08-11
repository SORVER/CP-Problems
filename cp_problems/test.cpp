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
            ll n ;cin >> n;
             vector<ll> arr(n);
             
            for(ll i =0 ;i < n ;i++){
                   cin >> arr[i];
            }

            for(ll i = 1;i < n;i ++){
                cout << arr[i] << " ";
            }
            cout << arr[0] << "\n";
            

       }
}
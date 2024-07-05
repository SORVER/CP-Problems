#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
        ll n  , m;
        cin>> n>> m;

        if(m > n){
         cout << "No\n";
        }else if((n-m)%2 == 0){
         cout << "Yes\n";
        }else {cout <<"No\n";}
   }
}
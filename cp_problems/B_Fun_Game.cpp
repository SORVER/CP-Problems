#include <bits/stdc++.h>
using namespace std;
#define ll long long

// recrsion is 1- base case 2- state 3- transion

// how to know if it's a dp or not  without using a tree?
// number of states is like 7 but transions is about 2^7

// it's called the Pigeonhole principle


// when to use dp ?
// 1- getting the answer of the problem using a sub-problem

int main() {

    ll t; cin >> t; while (t--)
    {
           ll n; cin >> n ; ll arr[n]; ll  arr2[n];
           char ch ;
            for(ll i =0 ;i < n;i++) {cin >> ch; if(ch == '1') arr[i] =1 ; else arr[i] = 0;}
            for(ll i =0 ;i < n;i++) {cin >> ch; if(ch == '1') arr2[i] =1 ; else arr2[i] = 0;}

            for(ll i = 1;i < n;i++) arr[i] = arr[i] + arr[i-1]; 
             bool fl = false;
           for(ll i =0 ;i < n ;i++)
           
           if(arr2[i] == 1 && arr[i] == 0) { fl = true;}
            if(fl) cout << "NO\n"; else cout << "YES\n";

         
    }
    

}
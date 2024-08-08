#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


   ll t; cin >> t; while(t--){
       ll n , a , b ; cin >> n >> a >> b;


       if(n == a && a == b){cout << "Yes\n";}
       else if(a +b  >= n -1 ) {cout << "No\n";}
       else {cout << "Yes\n";}


        
   }
}
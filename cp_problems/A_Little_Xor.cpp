#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

    ll n ;
    cin >> n;

    ll arr[n];

    for(ll i=0;i <n;i++)cin >>arr[i];

    for(ll i =1 ;i <n;i++) arr[i] = (arr[i]^arr[i-1]);

     

     ll ans = 0;
    for(ll i =1;i<= n;i++){

      for(ll j =0; j< n-i +1;j++){

         //cout << j << " " << i << "\n";
         ll pla;
          if(j == 0) pla = arr[j +i -1];
          else pla = (arr[j -1]^arr[j+i -1]);

          ans = max(ans,pla);
      }
    }

    cout << ans <<"\n";

   // output: 1 2 3 4 6 9 12 18 36
}
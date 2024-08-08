#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll const N =2e5 +3;

ll arr[N];

int log3(int k)
{
    int res=0;
    while (k)
    {
        k/=3;
        res++;
    }
    return res;
}
 
int main(){
    
    for(ll i = 0 ;i < N;i++) arr[i] = log3(i) ;
    for(ll i = 1 ;i< N;i++) arr[i] = arr[i] + arr[i -1];

   ll t; cin >> t; while(t--){
            ll l , r ; cin >> l >> r ; 
            ll ans = log3(l) ; ans*=2;
            l++;
            ans += arr[r] - arr[l -1];

            cout << ans << "\n";

            

           

        
   }
}
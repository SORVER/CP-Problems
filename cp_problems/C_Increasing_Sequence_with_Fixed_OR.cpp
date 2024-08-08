#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {



    ll t; cin >> t;
    while (t--)
    {

        ll n; cin >> n;
         if(n == 1) {cout << "1\n1\n"; continue;}
        vector <ll> ans;
        ans.push_back(n);
        for(ll i = 0; i< 64;i++){
         if(n&(1LL << i) && ((n& (~(1LL << i))) != 0) )
         {
               ans.push_back(n& (~(1LL << i)));
         }
        }
      
            
        cout << ans.size() << "\n";
        for(ll i = ans.size() -1;i != -1 ;i--){
         cout << ans[i] << " ";
        }
        cout << "\n";
        


    // output: 1 2 3 4 6 9 12 18 36
}


}
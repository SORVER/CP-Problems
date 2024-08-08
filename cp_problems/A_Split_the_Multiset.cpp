#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {

    ll t; cin >> t; while (t--)
    {
          ll n , k;
          cin >> n >> k;

            ll co = 0;
          while(n> 1){
            n -= (k -1);
            co++;
          }

          cout << co << "\n";
   
    }
    

}
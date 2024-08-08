#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {



    ll t; cin >> t;
    while (t--)
    {

        ll n; cin >> n;
        char arr[n];

        for(ll i=0;i <n;i++){cin >> arr[i]; }


        vector <ll> ans;

        bool bat = false ;
        for(ll i = 0;i < n;i++){
            if(arr[i] == '0' && bat == false ) {ans.push_back(0); bat = true;}
            if(arr[i] == '1') {ans.push_back(1); bat = false;}


        }

        ll anso = 0;
        for(ll i = 0;i <ans.size();i++){

            anso += ans[i];
        }

        if(anso > ans.size() - anso ||( n ==1 && ans[0] ==1)) cout << "Yes\n"; else cout << "No\n";

    }

    // output: 1 2 3 4 6 9 12 18 36
}
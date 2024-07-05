#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

   ll t ; cin >>t; while(t--){

       ll n , k ; cin >> n >> k; 
       ll sm = (k/(n -1))*n;

        
         sm += k%(n-1);
         if(k%(n-1) == 0) sm--;

        cout <<sm <<"\n";

          }  

   // output: 1 2 3 4 6 9 12 18 36
}
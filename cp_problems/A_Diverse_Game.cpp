#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {

    ll t; cin >> t; while (t--)
    {
          ll n , m;
          cin >> n >> m;
        ll arr[n][m];
           for(ll i =0 ;i < n;i++){
            for(ll j =0 ;j < m;j++)
             cin >> arr[i][j];
           }
          if(n == 1 && m == 1) {cout << -1 << "\n"; continue;}
          ll arr2[n][m];
            for(ll i =0 ;i < n ;i++){

            for(ll j =m -1 ;j != -1;j--)
             arr2[i][m -1 - j] = arr[i][j]; 

           }


                       if((m %2) ==1){

            for(ll j = 0 ; j < n;j++){
                  swap(arr2[j][m-1], arr2[j][ m/2] );
           }
           
      //cout << "Fer\n";
            }

            if(m == 1){

                for(ll i = 0 ;i < n/2;i++){
                   swap(arr2[i][0],arr2[n-1 - i][0]); 
                }
                if(n%2){
                  swap(arr2[n/2][0],arr2[0][0]);
                }
            }
               
                        for(ll i =0 ;i < n;i++){
            for(ll j =0 ;j < m;j++)
             cout << arr2[i][j] << " "; cout << "\n";
           }

   
    }
    

}
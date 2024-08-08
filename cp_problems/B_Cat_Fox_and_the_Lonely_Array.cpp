#include <bits/stdc++.h>
using namespace std;
#define ll long long



bool okay(ll k , ll arr[],ll n){
      ll first =0;
      //cout << k << "\n";
      if(n == k) return true;

      ll freq[32] {};

      for(ll i =0 ;i < k;i++){

            first = (first|arr[i]);

            ll temp = arr[i];

     

            ll co = 0;
            while(temp){
                      
            
                   freq[co] += ((temp)&1);

                   //if(k == 1)
                   //cout << freq[co] << "\n";
                   temp >>=1;
                   co++;
            }
      }
        // cout << first << "f\n";
      
      ll asl = first;
      
      for(ll i =1 ;i<=n-k;i++){

            ll temp = arr[i -1];
            ll co = 0;
            while(temp){
                   freq[co] -= ((temp )&1);
                   temp>>=1;
                   co++;
            }

            temp = arr[i + k -1 ];


            co = 0;
            while(temp){
                   freq[co] += ((temp )&1);
                   temp>>=1;
                   co++;
            }

            ll test = 0;
            for(ll i= 0;i<32;i++){
                 
                 if(freq[i] > 0)
                 test+=pow(2,i);
                
            }

            if(test != first) return false;


         
         
      }

              


               return true;


}
ll bs(ll arr[], ll n)
{
   ll l = 0, r = n+1;

   while (r> l +1)
   {
       ll mid = l+ (r-l)/2;
       if(okay(mid, arr, n)){
         r= mid;
       }else{
         l = mid;
       }

     
    }

      return r;
    

}
int main() {

    ll t; cin >> t; while (t--)
    {
          ll n ;
    cin >> n;

    ll arr[n];

    for(ll i=0;i <n;i++)cin >>arr[i];

    cout << bs(arr, n) << "\n";

   
    }
    

}
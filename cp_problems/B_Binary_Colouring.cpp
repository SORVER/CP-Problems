#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int main(){
  

    ll t; cin >> t; while(t--){
              ll x; cin >> x;
              ll ans = 0;


              ll mult = 0;
              map<ll,ll> neg;
              ans = x;
              for(ll i =0;i <33;i++){
                     
                     if(!((ans>>i)&1)){
                        mult = 0;//cout <<i <<"g";
                     }else if(mult >= 1){
                              if(mult ==1)neg[i-1] =1;
                              ans= (ans & ~(1<<i)); 
                              mult++;
                              if( ((ans>>(i+1) )&1) == 0) {mult = 0; ans |=  (1 << (i+1)); }

                              
                              
                              
                     }else if( ((ans>>i)&1) )  {   

                            ans= (ans | (1<<i )) ;
                            mult++;//cout <<"wef";

                     }
                     

                     
              }
              
              cout << "32\n";
              for(ll i =0;i<32;i++){if(neg[i]) cout << -1 ; else cout << (ans&1) ; ans>>=1; cout << " ";} cout << "\n";

    }

}
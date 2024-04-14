# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;
  
int main (){



       ll t; 
       cin >> t;
        

       while (t--){
       
        ll n;
        cin >> n;
        string ss;
        cin >> ss;
        

        ll ans = 0;
        for(ll i =0 ; i < n;i++){
            
            if(ss[i] == 'm' && ss[i+1] =='a' && ss[i+2] == 'p'){
            ans++;
             i+=2;
            }
                        if(ss[i] == 'p' && ss[i+1] =='i' && ss[i+2] == 'e'){
            ans++;
             i+=2;
            }
        }

        for(ll i =0 ; i< n ;i++){
                        if(ss[i] == 'm' && ss[i+1] =='a' && ss[i+2] == 'p' && ss[i+3] == 'i' && ss[i+4] == 'e'){
            ans--;
       
            }
        }

        cout << ans << "\n";
        
       }
}
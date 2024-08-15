# include <iostream>
# define ll long long

#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

using namespace std ;


unsigned ll dist(ll x ,ll y , ll x1 , ll y1 ){
     unsigned ll ditx = (x1 -x)*(x1 -x);
     unsigned ll dity = ( y1 - y)*( y1 - y);

     unsigned ll ans = ditx + dity;
     return ans;
}

int main (){
        FAST
       ll t; cin >> t; while (t--){
            string ss ;cin >> ss;


            if(ss.size() < 3 || ( ss[0] != '1' || ss[1] != '0' )){
                cout << "NO\n";
            }else {

               if(ss.size() > 3){
                    ll fl = 0;
                    for(ll i =2;i<ss.size();i++){
                      if(ss[i] == '0')fl =1;
                      else break;
                    }

                   if(fl ){
                        cout << "NO\n";
                   } else 
               {   cout << "YES\n";}
               }else {

                  if(ss[2] == '0' || ss[2] == '1'  ) cout << "NO\n"; else cout << "YES\n";
               }
            }



            

       }
}
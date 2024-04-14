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
        vector <char> pp;
        ll end = 0;
        if(ss[n-1] == 'a' || ss[n-1] == 'e'){
            pp.push_back(ss[n-1]);
            pp.push_back(ss[n-2]);
            end = 3;
        }else {
            end = 4;
              pp.push_back(ss[n-1]);
            pp.push_back(ss[n-2]);
            pp.push_back(ss[n-3]);
        }
        pp.push_back('.');


        for(ll i = n-end ;i > -1;i--){
                    if(ss[i] == 'a' || ss[i] == 'e'){
            pp.push_back(ss[i]);
            pp.push_back(ss[i-1]);
              pp.push_back('.');
            i-= 1;
        }else {
          
              pp.push_back(ss[i]);
            pp.push_back(ss[i-1]);
            pp.push_back(ss[i-2]);  i-=2;
              pp.push_back('.');
        }
        }


        for(ll i =pp.size() -2; i != -1;i--) cout << pp[i];
        cout << "\n";

        
        
       }
}
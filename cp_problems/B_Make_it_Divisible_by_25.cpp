# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;
ll maxi = 0;
string edits(string  ss , ll p){

       string news = "";

       for(ll i = 0 ; i< ss.size() ;i++){
               if(i == p) continue;
               news += ss[i];
       }
       return news;
}

ll vis[]

void dp(string ss){
    if(ss == "" || stoi(ss) == 0) return;

          ll oo = stoll(ss);
       if(oo%25 == 0){

        maxi = max((ll)ss.size() , maxi);
        return;
       }

    


       for(ll i=0 ;i < ss.size();i++)
        dp(edits(ss,i));


}
int main (){



       ll t; 
       cin >> t;


       while (t--){
  
                 ll n ;
                 cin >> n;
                 maxi = -1;
             dp( to_string(n) );

                 cout << to_string(n).size() - maxi << "\n";


       }
}
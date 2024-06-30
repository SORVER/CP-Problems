# include <iostream>
# define ll long long

#include <bits/stdc++.h>


using namespace std ;

vector<ll> subvector(const vector<ll>& vec, size_t start, size_t length) {
    if (start > vec.size()) {
        throw std::out_of_range("Start index is out of range");
    }
    size_t end = std::min(start + length, vec.size());
    return vector<ll>(vec.begin() + start, vec.begin() + end);
}
vector<ll>::iterator find_subvector(vector<ll>& vec, const std::vector<ll>& subvec) {
    if (subvec.empty() || vec.size() < subvec.size()) {
        return vec.end();
    }
    for (auto it = vec.begin(); it <= vec.end() - subvec.size(); ++it) {
        if (std::equal(it, it + subvec.size(), subvec.begin())) {
            return it;
        }
    }
    return vec.end();
}
int main (){



       ll t; 
       cin >> t;


       while (t--){
                 ll l , r;
                 cin >> l >> r;
                 

                 ll ans =(r/2)*2;
                  

                  ll co = 0;
                 while(ans){
                  ans/=2;
                  co++;
                 }
                 cout << co -1<< "\n";
       }
}
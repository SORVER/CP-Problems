#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> getdiv(int x){

    vector <int> divisors ; 

    for(int i = 1 ; i* i <= x ; i ++){
          if(x % i == 0){
            divisors.push_back(i);
           if( i * i != x)
            divisors.push_back(x/i);
          }

    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}


// EX1
vector < int> getdiv(int x){

      vector <int> divisors;

      for(int i = 1; i <= x;i++){

        if(x%i == 0)
        divisors.push_back(i);

      }


      return divisors;

}

// EX2

// vector < int> getdiv(int x){

   

//       vector <int> divisors;

//       for(int i = 1; i <= x;i++){

//         if(x%i == 0)
//         divisors.push_back(i);

//       }


//       return divisors;

// }


int fixmod(int x, int mod){


    return (x % mod + mod) ;
}




int main() {
     cout << fixmod(-4 , 2); return 0;


   vector<int> numbers ;
   numbers = getdiv(36);
   for(int i =0 ; i < numbers.size();i++){
    cout << numbers[i] << " ";
   }

   // output: 1 2 3 4 6 9 12 18 36
}
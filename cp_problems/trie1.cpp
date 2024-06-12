// https://vjudge.net/contest/618303#problem/R
// ACC

#include <iostream>
#define ll long long
using namespace std;

#include <bits/stdc++.h>


class trieNode{

public:
    map<char,trieNode*> children;
    ll prefix;

    trieNode(){
        prefix =0;
    }
};
class Trie{
public:
      trieNode* root ;

      Trie(){
          root = new trieNode();
      }

      void insert(string ss){

            trieNode* curr = root;


            for(auto ch :ss){
                if(curr->children.find(ch) == curr->children.end())
                    curr->children[ch] = new trieNode();
                curr->children[ch]->prefix++;
                curr = curr->children[ch];


            }
      }


      ll prefix(string ss){
          trieNode* curr = root;
          for(auto ch :ss){
              if(curr->children.find(ch) == curr->children.end())
                  curr->children[ch] = new trieNode();

              curr = curr->children[ch];


          }

          return curr->prefix;
      }


};





int main() {


     ll t =1; while(t--)
    {



         ll n, q; cin >> n>>q;





        Trie trie;
         for(int i=0;i < n;i++){

             string ss ; cin  >> ss;
             trie.insert(ss);

         }

            while(q--){
                // trie prefix
                // why when we input at  and c does not work for cat ? bec. it's like the tree must to read the nodes as c->a->t
                string ss ;cin>>ss;
                cout << trie.prefix(ss) << "\n";
            }
    }



}

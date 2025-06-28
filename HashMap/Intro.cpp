#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    // insert element through pair
    m.insert(make_pair("yukti", 1));
    // insert element through initializer list
    m.insert({"yash", 2});
    m["sahu"] = 4;

    // cout << m.size() << endl;

    // traverse
    // for(auto i : m){
    //     cout << i.first << " " << i.second << endl;
    // }

    // with iterator
    // unordered_map<string , int> :: iterator it;
    // it = m.begin();
    // while(it != m.end()){
    //     cout << it->first << " " << it->second << endl;
    // }
    
}
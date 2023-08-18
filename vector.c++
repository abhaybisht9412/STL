#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 1; i <= 5; i++){
        v.push_back(i * 10);
    }
    for(auto it:v){
        cout << it << " " ;
    }
    cout << endl;
    auto itr = v.begin();
    cout << *itr << endl;

  auto  ittr = v.rbegin() ;
    cout << *ittr << endl;
  
  cout << v.at(4) << endl;
    cout << "............\n";
    vector<int> a;

  for(int i = 0 ;i < 5 ;i++){
    a.push_back(i+1);
  }
    cout << *a.begin() + 3 << endl;

    reverse(a.begin()+1 , a.begin() + 4);

    for(auto &ii : a){
        cout << ii << " ";
    }
}
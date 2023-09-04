#include<bits/stdc++.h>
using namespace std;

int main(){
  //   vector<int> v;
  //   for(int i = 1; i <= 5; i++){
  //       v.push_back(i * 10);
  //   }
  //   for(auto it:v){
  //       cout << it << " " ;
  //   }
  //   cout << endl;
  //   auto itr = v.begin();
  //   cout << *itr << endl;

  // auto  ittr = v.rbegin() ;
  //   cout << *ittr << endl;
  
  // cout << v.at(4) << endl;
  //   cout << "............\n";
  //   vector<int> a;

  // for(int i = 0 ;i < 5 ;i++){
  //   a.push_back(i+1);
  // }
  //   cout << *a.begin() + 3 << endl;

  //   reverse(a.begin()+1 , a.begin() + 4);

  //   for(auto &ii : a){
  //       cout << ii << " ";
  //   }
  
  vector<int> v = {2,1,5,8,3} ;
  int a[] = {2,1,5,8,3};

//   // binary search
  sort(v.begin(),v.end());
//   sort(a, a + 5);
//   // bool res = binary_search(v.begin(),v.end(),3) ;
//   // cout << res << endl;
  
//   //  lower bound  
//   //   auto itr1 = lower_bound(v.begin(),v.end(),2);
//   //   cout << *(itr1) << endl ;

//     auto itr = lower_bound(a,a + 5 ,9);
//     cout << *(itr) << endl ;

//     int itr1 = lower_bound(v.begin(),v.end(),8) - v.begin() ;
//     cout << itr1 << endl ;

//     int itr2 = lower_bound(a,a + 5 ,10) - a;
//     cout << itr2 << endl ;
// }
 
//  erase
// v.erase(v.begin() + 1 , v.begin() + 3);
// for(auto i : v) cout << i << " " ;


// upper bound  1,2,3,5,8

//  auto i = upper_bound( v.begin() , v.end() , 8);
//  cout << (*i) << " "; 
//  int val = upper_bound( v.begin() , v.end() , 5) - v.begin() ;
//  cout << val << endl;

vector<bool> sieve(5,false);
for(int i = 0 ; i < v.size();i++){
  cout << sieve[i] << " " ;
}

}
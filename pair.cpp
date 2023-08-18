#include<bits/stdc++.h>
using namespace std;

int main(){
 pair<int,int> p(1,2);

    cout << p.first <<  " " << p.second << endl;
 
    p.first = 23;

    cout << p.first <<  " " << p.second << endl; ;

    // swap 
    
    pair<int,string> p1 , p2;
    p1 = make_pair(1,"abhay");
    p2 = make_pair(2,"bisht");

    p1.swap(p2);

    cout << p1.first <<  " " << p1.second << endl;
    cout << p2.first <<  " " << p2.second << endl;

}
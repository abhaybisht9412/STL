#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int,int> p1 , pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // same
    if(p1.first > p2.first) return true;
    return false;
}

int main(){
    pair<int,int> a[] = {{4,1},{2,1},{1,2}} ;

    sort(a,a+3 ,comparator);

    for(int i = 0 ; i < 3 ;i++){
        cout << a[i].first << " " << a[i].second << "\n";
    }
}
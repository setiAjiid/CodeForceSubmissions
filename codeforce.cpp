#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    set<int> mySet;
    for (int i=a;i<=e;i+=a){
        mySet.insert(i);
    }
    for (int i=b;i<=e;i+=b){
        mySet.insert(i);
    }
    for (int i=c;i<=e;i+=c){
        mySet.insert(i);
    }
    for (int i=d;i<=e;i+=d){
        mySet.insert(i);
    }
    int digit = mySet.size();
    cout<<digit;


}

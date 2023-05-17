#include <bits/stdc++.h>
using namespace std;

int main() {
       int a,b,c,d;
       set<int> mySet;
       cin>>a>>b>>c>>d;
       mySet.insert(a);
       mySet.insert(b);
       mySet.insert(c);
       mySet.insert(d);
       int beda = mySet.size();
       cout<<4-beda;


}

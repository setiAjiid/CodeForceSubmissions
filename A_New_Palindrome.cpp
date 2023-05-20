#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        set<char> mySet;
        cin>>s;
        for (int j=0;j<s.length()/2;j++){
            mySet.insert(s[j]);
        }
        int abjad = mySet.size();
        if (abjad==1){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
}

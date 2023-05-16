#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sLen;
    cin>>n;
    string s;
    for (int i=0;i<n;i++){
        cin>>sLen;
        cin>>s;
        set<char> char_set;
        for(int j=0;j<s.length();j++){
                char_set.insert(s[j]);
            }
        int x = char_set.size();
        if (sLen%x>=2){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }

    }
}

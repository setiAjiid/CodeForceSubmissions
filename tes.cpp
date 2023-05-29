#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, pattern = "halo dunia";
    int cek = 0;
    getline(cin,s);
    for (int i=0;i<10;i++){
        s[i] = tolower(s[i]);
        if (s[i]==pattern[i]){
            cek++;
        }
    }
    cout<<cek;

}

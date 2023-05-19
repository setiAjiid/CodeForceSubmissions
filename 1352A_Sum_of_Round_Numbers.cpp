#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,cek,digit;
    cin>>n;
    int pengali;
    while (n>0){
        vector<int> myVector;
        pengali = 1;
        cek = 0;
        cin>>t;;
        while (t>0){
            digit = t%10;
            if (digit != 0){
                myVector.push_back(digit*pengali);
                cek++;
            }
            t /= 10;
            pengali *= 10;
        }
        cout<<cek<<endl;
        for (auto i=myVector.begin();i!=myVector.end();++i){
            cout<<*i<<" ";
        }
        //reverse output dan penggunaan vektor dalam for atau perulangan
//        for (int i = myVector.rbegin();i != myVector.rend();++i){
//            cout<<*i<<" ";
//        }
        cout<<endl;
        n--;
    }
}

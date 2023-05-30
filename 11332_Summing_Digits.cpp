#include <bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int n,cek = 0;
        cin>>n;
        if (n==0){
            break;
        }
        for (int i=0;n>=10;i++){
            int cek = n%10;
            n /= 10;
            n += cek;
        }
        cout<<n;
    }


}

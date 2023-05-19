#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,selisih;
    cin>>n;
    for (int i=0;i<n;i++){
        int cnt = 0;
        cin>>a>>b;
        selisih = abs(a-b);
        if (selisih%10!=0){
            cnt++;
        }
        cnt += selisih/10;
        cout<<cnt<<endl;
    }
}

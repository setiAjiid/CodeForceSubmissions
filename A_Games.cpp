#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,home[32],away[32],cnt = 0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>home[i]>>away[i];
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i!=j && home[i]==away[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;

}

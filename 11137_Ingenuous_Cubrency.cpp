#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll n,arrJenisKoin[22] = {},dp[10001];
void jenisKoin (){
    for (int i=1;i<=21;i++){
        ll pangkat = pow(i,3);
        arrJenisKoin[i] = pangkat;
    }
}

int main(){
    jenisKoin();
    while (cin>>n){
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(int i=1;i<=21;i++){
            for (int j=1;j<=n;j++){
                if (arrJenisKoin[i]<=j){
                    dp[j]+= dp[j-arrJenisKoin[i]];
                }
            }
        }
        cout<<dp[n]<<endl;
    }


}

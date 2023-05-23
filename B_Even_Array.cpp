#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,x;
    cin>>n;
    vector<int> kasus(n);
    for (int i=0;i<n;i++){
        int y = 0, z = 0;
        cin>>kasus[i];
        for (int j=0;j<kasus[i];j++){
            cin>>x;
            if (x%2==0 && j%2==1){
                y++;
            } else if (x%2==1 && j%2==0){
                z++;
            }
        }
        if (y!=z){
            cout<<-1<<endl;
        } else {
            cout<<y<<endl;
        }
    }


}

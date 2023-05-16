#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,cnt = 0;
    cin>>n;
    while (n!=0){
        if (n>=100){
            n-=100;
            cnt++;
        }
        else if (n>=20){
            n-=20;
            cnt++;
        } else if (n>=10){
            n-=10;
            cnt++;
        } else if (n>=5) {
            n-= 5;
            cnt++;
        } else {
            n-=1;
            cnt++;
        }
    }
    cout<<cnt;
}

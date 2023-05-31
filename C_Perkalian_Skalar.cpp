#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, arr1[10001],arr2[10001], sum = 0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n, greater<int>());
    for (int i=0;i<n;i++){
        sum += arr1[i]*arr2[i];
    }
    cout<<sum;
}

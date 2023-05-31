#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,rak, arr[20000], sum = 0, cek = 0;
    memset(arr,0,sizeof(arr));
    cin>>n>>rak;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ukuran = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+ukuran, greater<int>());
    for (int i=0;i<n;i++){
        sum += arr[i];
        cek++;
        if (sum>=rak){
            break;
        }
    }
    cout<<cek<<endl;





}

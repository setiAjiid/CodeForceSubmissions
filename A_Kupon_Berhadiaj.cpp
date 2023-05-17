#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n,murni,arr[1005],plus,sum[1005];
    cin>>n>>murni;
    for (int i=1;i<=n;i++){
        arr[0] = murni;
        cin>>arr[i];
    }
    sort(arr,arr+n+1);
    for (int i=0;i<=n;i++){
        if (arr[i]-murni == 0 && i==0){
            cout<<arr[i+1];
        } else if (arr[i]-murni==0 && i==n){
            cout<<arr[i-1];
        } else if (arr[i]-murni==0 && i!=n && i!=0){
            if(abs(arr[i-1]-arr[i])>abs(arr[i+1]-arr[i])){
                cout<<arr[i+1];
            } else if(abs(arr[i-1]-arr[i])<abs(arr[i+1]-arr[i])){
                cout<<arr[i-1];
            } else {
                if (arr[i-1]<arr[i+1]){
                    cout<<arr[i-1];
                } else {
                    cout<<arr[i+1];
                }
            }
        }
    }


}


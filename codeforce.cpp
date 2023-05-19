#include <bits/stdc++.h>
using namespace std;

int main(){
    int red,blue,cnt = 0;
    cin>>red>>blue;
    while (red>0 && blue>0){
        red--;
        blue--;
        cnt++;
    }
    cout<<cnt<<" ";
    if (red!=0){
        if (red%2==0){
            cout<<red/2;
        } else {
            cout<<(red-1)/2;
        }
    } else if (blue!=0){
        if (blue%2==0){
            cout<<blue/2<<" ";
        } else {
            cout<<(blue-1)/2;
        }
    } else {
        cout<<0;
    }
}

#include <bits/stdc++.h>
using namespace std;

int n1,n,m1,m,inputA[76][76],inputB[76][76],cek_identik = 0,cek_horizon = 0,cek_vertikal = 0,cek_kanan = 0,cek_kiri = 0,temp_i,temp_j;
int main(){
    cin>>n1>>m1;
    for (int i=0;i<n1;i++){
        for (int j=0;j<m1;j++){
            cin>>inputA[i][j];
        }
    }
    cin>>n>>m;
    for (int i=0;i<n1;i++){
        for (int j=0;j<m;j++){
            cin>>inputB[i][j];
        }
    }
    //identik
    for (int i=0;i<n1;i++){
        for (int j=0;j<m;j++){
            if (inputA[i][j]==inputB[i][j]){
                cek_identik++;
            }
        }
    }
    //horizontal
    temp_i = n-1;
    for (int i=0;i<n1;i++){
        for (int j=0;j<m;j++){
            if (inputA[i][j]==inputB[temp_i][j]){
                cek_horizon++;
            }
        }
        temp_i--;
    }

    //vertikal
    temp_i = n-1;
    for (int i=0;i<n1;i++){
        temp_j = m-1;
        for (int j=0;j<m;j++){
            if (inputA[i][j]==inputB[i][temp_j]){
                cek_vertikal++;
            }
            temp_j--;
        }
    }
    //kanan
    for (int i=0;i<n1;i++){
        for (int j=0;j<m;j++){
            if (inputA[i][j]==inputB[j][i]){
                cek_kanan++;
            }
        }
    }

    //kiri
    temp_i = n-1;
    for (int i=0;i<n1;i++){
        temp_j = m-1;
        for (int j=0;j<m;j++){
            if (inputA[i][j]==inputB[temp_j][temp_i]){
                cek_kiri++;
            }
            temp_j--;
        }
        temp_i--;
    }


    if (cek_identik==n*m){
        cout<<"identik"<<endl;
    } else if (cek_horizon == n*m){
        cout<<"horisontal"<<endl;
    } else if (cek_vertikal == n*m){
        cout<<"vertikal"<<endl;
    } else if (cek_kanan == n*m){
        cout<<"diagonal kanan bawah"<<endl;
    } else if (cek_kiri == n*m){
        cout<<"diagonal kiri bawah"<<endl;
    } else {
        cout<<"tidak identik"<<endl;
    }


}

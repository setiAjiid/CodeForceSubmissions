#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,n,k,a[31],b[31],sum;
    cin>>test;
    for (int i=0;i<test;i++){
        sum = 0;
        cin>>n>>k;
        for (int j=0;j<n;j++){
            cin>>a[j];
        }
        for (int k=0;k<n;k++){
            cin>>b[k];
        }
        for (int l=0;l<k;l++){
            int minVala = *min_element(a,a+n);
            int maxValb = *max_element(b, b+n);
            int idxa = distance(a, find(a,a+n,minVala));
            int idxb = distance(b, find(b,b+n,maxValb));
            if (minVala>=maxValb){
                break;
            } else {
                swap (a[idxa],b[idxb]);
            }
        }
        sum = accumulate(a ,a+n,0);
        cout<<sum<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int orang,botol,vol,lime,slice,banyakGaram,butuhAir,butuhGaram;
    cin>>orang>>botol>>vol>>lime>>slice>>banyakGaram>>butuhAir>>butuhGaram;
    int totAir = (botol*vol)/butuhAir;
    int sumSlice = lime*slice;
    int garam = banyakGaram/butuhGaram;
    int minim = (min(totAir,min(sumSlice,garam)))/orang;
    cout<<minim;
}

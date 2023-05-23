#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> person(n);
    for (int i=0;i<n;i++){
        cin>>person[i];
    }
    vector<int> program,math,phisycs;
    for (int i=0;i<n;i++){
        if (person[i]==1){
            program.push_back(i+1);
        } else if (person[i]==2){
            math.push_back(i+1);
        } else {
            phisycs.push_back(i+1);
        }
    }
    int team = min(program.size(),min(math.size(),phisycs.size()));
    cout<<team<<endl;
    for (int i=0;i<team;i++){
        cout<<program[i]<<" "<<math[i]<<" "<<phisycs[i]<<endl;
    }

}

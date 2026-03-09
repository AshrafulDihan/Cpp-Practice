//
// Created by USER on 3/5/2026.
//

//Vector of pair
#include<bits/stdc++.h>
using namespace std;

//Function for print vector
void PrintVec(vector<pair<int, int>>&v) {
    cout<<"Size: "<<v.size()<<endl; //size

    for (int i =0; i<v.size(); i++) {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main() {
    vector<pair<int, int>> v;
    int n;
    cin>>n;

    for (int i= 0; i<n; i++) {
        int x, y;
        cin>>x >>y;
        v.push_back({x, y});
    }

    PrintVec(v);

    return 0;
}
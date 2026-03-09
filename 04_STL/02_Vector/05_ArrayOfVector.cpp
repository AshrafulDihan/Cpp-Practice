//
// Created by USER on 3/5/2026.
//

#include<bits/stdc++.h>
using  namespace std;

//print vector

void PrintVec(vector<int>&v) {
    cout<<v.size()<<endl;

    for (int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n; // vector size
    vector<int>v[n];  // create an array of n vectors

    // loop to take input for each vector
    for (int i = 0; i<n; i++) {

        int x;
        cin>>x;  // number of elements in the i-th vector
        for (int j= 0; j<x; j++ ) {
            int y;
            cin>>y; // read element
            v[i].push_back(y);
        }
    }

    // loop to print all vectors
    for (int i= 0; i<n; i++) {
        PrintVec(v[i]);
    }

    return 0;
}
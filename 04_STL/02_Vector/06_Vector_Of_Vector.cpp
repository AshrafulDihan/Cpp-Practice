//
// Created by USER on 3/6/2026.
//

#include<bits/stdc++.h>
using namespace std;

// Function to print elements of a vector
void PrintVec(vector<int> &v) {
    cout<<"size: "<<v.size()<<endl;

    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {

    // Declare a 2D vector (vector of vectors)
    vector<vector<int>> v;

    int n;
    cin>>n;

    // Loop to create n vectors
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;

        // Temporary vector to store elements
        vector<int> temp;

        for (int j=0; j<x; j++) {
            int y;
            cin>>y;
            temp.push_back(y); // Add element to temp vector
        }

        // Add the temporary vector into the 2D vector
        v.push_back(temp);
    }

    for (int i=0;i<v.size(); i++) {

        // Call the function to print each vector
        PrintVec(v[i]);
    }

}
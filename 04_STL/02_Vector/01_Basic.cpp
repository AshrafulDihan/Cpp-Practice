//
// Created by USER on 3/3/2026.
//
#include<bits/stdc++.h>

using namespace std;

//for int print
void PrintVec(vector<int>&v) {
    for (int i= 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//for string print
void PrintVector(vector<string>&v) {
    for (int i= 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int>v (4, 3); // All elements of vector is 3;
    vector<int>n={1,2,3,4,5,6}; // elements are 1 2 3 4 5 6

    vector<int> x(5);
    x.push_back(2);
    x.push_back(9);
    PrintVec(x); // 0 0 0 0 0 2 9
    x.pop_back();
    PrintVec(x); // 0 0 0 0 0 2

    //String type vector

    vector<string> z;
    int num = 3;

    for (int i = 0; i<num ; i++) {
        string s;
        cin>>s;
        z.push_back(s);
    }

    PrintVector(z);

    return 0;
}
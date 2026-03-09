//
// Created by USER on 3/3/2026.
//
#include<bits/stdc++.h>

using namespace std;

//Without reference
//What happened?
/*
  A new vector is created
  All elements are copied
  Copying cost = O(n)
  Any modification inside function will NOT affect original
 */
void PrintVec(vector<int>v) {

    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    v.push_back(2); //Not added
    cout<<endl;
}

int main() {
    vector<int> v = {10, 20, 30, 40};

    v.push_back(50);

    cout<<"Without reference: "<<endl;
    PrintVec(v);  //Output : 10 20 30 40 50

    vector<int> v2 = v;

    PrintVec(v2); //Output : 10 20 30 40 50 (copy v )

    v2.push_back(88); // add 88 in v2
    PrintVec(v2);  //Output : 10 20 30 40 50 88

    PrintVec(v); //Output : 10 20 30 40 50  ( No change in v ) in main vector;


}
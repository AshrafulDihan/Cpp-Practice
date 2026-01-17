//
// Created by USER on 1/13/2026.
//

//It checks whether the input string contains 7 or more identical consecutive characters
//and prints YES if it does, otherwise NO.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    string x;
    cin>>x;
    int count = 1;

    for ( int i = 0; i<x.length(); i++) {
        if (x[i]== x[i+1]) {
            count ++;
            if (count >= 7) {
                cout<<"YES";
                return 0 ;
            }
        }
        else {
            count = 1;
        }
    }

    cout<<"NO";

return 0;

}
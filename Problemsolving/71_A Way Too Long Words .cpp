//
// Created by USER on 1/7/2026.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin>>x;

    string input[x];


    int i =0;
    while (i<x) {
        cin>>input[i];

        i++;
    }


    i =0;
    while (i<x) {
        int size;
        size = input[i].length();
        if (size<= 10) {
            cout<< input[i]<<endl;
        }
        else {
            cout<<input[i][0]<<size-2<<input[i][size-1]<<endl;
        }
        i++;
    }

    return 0;
}
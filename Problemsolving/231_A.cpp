             //
// Created by USER on 1/14/2026.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;

    int arr[n][3];

    for (int i= 0; i<n; i++) {
        for (int j=0 ; j<3; j++) {
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        if (sum>=2) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
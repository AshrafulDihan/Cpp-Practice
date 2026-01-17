//
// Created by USER on 1/17/2026.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;

    int sum1 =0 , sum2 = 0;

    for (int i = 0; i<3; i++) {
        sum1+=s[i];
    }

    for (int i =5; i>2 ; i--) {
        sum2+=s[i];
    }

    if (sum1 == sum2 ) {
        cout<<"YES\n";
    }

    else {
        cout<<"NO\n";
    }
}
int main() {
    int x;
    cin>>x;

    while (x--) {
        solve();
    }

    return 0;
}
//
// Created by USER on 1/16/2026.
//

// the first character of ti
//isn't equal to the last character of tj

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int n,m;
void solve() {
    cin>>n;
    string s;
    cin>>s;

    if (s[0] == s[n-1]) {
        cout<< "NO"<<endl;
    }

    else {
        cout<< "YES"<<endl;
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
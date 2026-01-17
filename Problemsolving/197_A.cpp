//
// Created by USER on 1/17/2026.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, c;
    cin>>c;

    bool flag = true;

    for (int i = 0 ; i<5; i++) {
        cin>>s;

        if (s[0] == c[0] || s[1] == c[1]) {
            cout<<"YES\n";
            return 0;
        }

        else {
           flag = false;
        }
    }
    if (flag == false) {
        cout<<"NO\n";
    }

    return 0;
}
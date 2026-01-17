//
// Created by USER on 1/16/2026.
//

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    string c, y;

    cin>>c>>y;

    bool flag = true;

    if (c.length() != y.length()) {
        cout <<"NO\n";
        return 0;
    }

    for (int i=0; i<c.length(); i++) {
            if (c[i] != y[y.length()-1-i]) {
                flag = false;
                break;
            }
        }

    if (flag) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}
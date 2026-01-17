//
// Created by USER on 1/15/2026.
//



#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;

    bool flug = true;

    if (s.length() == 1) {
        if (s == "Y" || s == "e" || s == "s") {
            cout<<"YES"<<endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }
    else {
        for (int i= 0; i<s.length()-1 ; i++) {
            if (s[i] == 'Y') {
                if (s[i+1] != 'e') {
                    flug = false;
                    break;
                }
            }

            else if (s[i] == 'e') {
                if (s[i+1] != 's') {
                    flug = false;
                    break;
                }
            }

            else if (s[i] == 's') {
                if (s[i+1] != 'Y') {
                    flug = false;
                    break;
                }
            }
            else {
                flug = false;
                break;
            }
        }
        if (flug) {
            cout<< "YES" << endl;
        }

        else {
            cout<<"NO" << endl;
        }
    }

}

int main() {
    int x;
    cin>>x;

    while (x--) {
        solve();
    }
}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string word;
    getline(cin, word);

    int small= 0, capital= 0;

    for ( int i =0; i<word.length(); i++) {
        if (islower(word[i]) ) {
            small++;
        }
        else if (isupper(word[i])) {
            capital++;
        }
    }

    if (capital>small) {
        for  (int i =0; i<word.length(); i++) {
            word[i] = toupper(word[i]);
        }
    }
    else if (capital<=small) {
        for  (int i =0; i<word.length(); i++) {
            word[i] = tolower(word[i]);
        }
    }

    cout<<word;
    return 0;
}
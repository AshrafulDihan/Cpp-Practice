//
// Created by USER on 11/13/2025.
//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string name = "Ashraful Alam Dihan";

    // reverse(name.begin(), name.end());
    // cout<<"After reverse:" <<name<<endl;
    //
    // name.erase(remove(name.begin(), name.end(), ' '), name.end());
    // cout<<"\nAfter erase space:"<<name;
    //
    // sort(name.begin(), name.end());
    // cout<<"\nAfter sorting:" <<name;

    auto pos = 0 ;

    while ((pos = name.find('a', pos)) != string::npos){
        name[pos] = 'X';
        pos++;
    }

    cout<<"\nAfter remove 'a':" <<name;

}
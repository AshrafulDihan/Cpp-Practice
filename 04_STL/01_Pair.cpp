//
// Created by USER on 1/20/2026.
//

//Pair of any two data type .

#include<iostream>
using namespace std;

int main() {
    pair< int , string> p;
    p = {10, "abcd"};
   // p = make_pair(2, "abcd");

    cout << p.first << "" <<p.second << endl;


}
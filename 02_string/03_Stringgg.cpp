//
// Created by USER on 3/6/2026.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    string str ="Dihan";

    //str.size() -- string size
    cout<<"Size: "<<str.size()<<endl;

    //string Input

    string school;
    cout<<"Enter your school name: ";
    getline(cin , school);

    cout<<"Your school is: " <<school<<endl;

    cout<<str.find('n')<<endl;
    cout<<str.insert(3,"78")<<endl;

    cout<<str.erase(2,4)<<endl;

    cout<<str.replace(0,3,"Ashraful")<<endl;
}
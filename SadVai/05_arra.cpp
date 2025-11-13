//
// Created by ashra on 31/10/2025.
//
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    char name[100];
    char Fullname[100];
    int n;
    cin>> n;
    int arr[n];
    //scan array elements
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }

    cout<<"Enter the short name: ";
    cin>>name;//string without space.

    cout<<"Enter the full name: ";
    getchar();//avoid extra space problem

    //string input with space
    cin.getline(Fullname , 100);

    //print
    cout<<name<<endl;
    cout<<Fullname<<endl;
    cout<<strlen(name)<<endl;
    cout<<strlen(Fullname)<<endl;
}
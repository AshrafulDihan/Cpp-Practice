

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int x, k;
    cin>>x>>k;
    int arr[x];


    int count = 0;

    for (int i = 0 ; i<x; i++) {
        cin>> arr[i];
        if (arr[i]>= arr[k] && arr[i]>0) {
            count ++;
        }
    }
    cout<<count << endl ;

}
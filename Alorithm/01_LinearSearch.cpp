//
// Created by USER on 2/16/2026.
//

#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int>&arr, int target) {

    for (int i= 0; arr.size(); i++) {
        if (arr[i]== target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,8,5, 9, 2, 4};
    int target = 2;

    int result = LinearSearch(arr, target);

    if (target != 1) {
        cout<<"Found at: "<<result;
    }

    else {
        cout<< "NOT FOUND!";
    }
}
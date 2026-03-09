//
// Created by USER on 1/21/2026.
//

#include<iostream>
#include<bits/stdc++.h>

int main() {
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    std::fill(arr , arr+ size , 0);
    //fill all 0;

    for (int i=0; i<size; i++) {
        std::cout<<arr[i]<<" ";
    }

    return 0;
}

//This type of issue needs in gaming or simulation to set all value to initial 0.
//
// Created by USER on 1/21/2026.
//

#include<iostream>
#include<bits/stdc++.h>

int main() {

    int arr [] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]) ;  //sizeof(arr) = 7 × 4 = 28 bytes
                                               // int = 4bytes;

    //total bytes / one element bytes
    // size = 7*4 / 4
    //      = 7

    int *result = std::find(arr, arr+size , 3);
                            // ( start ,   end   , value  );
    //if std::find don't find the match value

    //why *result --> because std::find give the memory address

    // Start pointer p = arr = 100
    // End pointer   = arr + size = 128


    if (result != arr + size) {
        std::cout <<" Element found at " << result-arr <<std::endl;
        // result - arr gives the index of the found element (pointer difference in elements)
        //result - arr  =  108 - 100; ==8/4 : index 2
    }

    else{
        std::cout <<" Element Not found!! " << std::endl;
    }

    return 0 ;

}
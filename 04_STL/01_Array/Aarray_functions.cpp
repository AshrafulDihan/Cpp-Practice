//
// Created by USER on 1/21/2026.
//

#include<iostream>
#include<bits/stdc++.h>

int main() {
    std::array<int , 5> arr = {1,2,3,44,5};

    std::array<int , 5> a = {1,2,3,4,5};
    std::array<int , 5>b = {7,8,9,6,5};

    //get array size
    std::cout<< "Size: "<<arr.size() <<std::endl;

    //array index
    std::cout<< "Element at index(3) is : "<<arr.at(3)<<std::endl;

    //array front element and back element
    std::cout << "Front element: "<<arr.front()<< std::endl;
    std::cout << "last element: "<<arr.back()<< std::endl;

    arr.fill(0);

    //print arr after fill
    std::cout<<"After fill: ";
    for (int i = 0; i<arr.size(); i++) {
        std::cout<<arr[i]<< " ";
    }

    //swap 2 array
    a.swap(b);



    return 0;
}
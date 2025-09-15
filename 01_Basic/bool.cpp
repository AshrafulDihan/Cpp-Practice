//
// Created by USER on 9/12/2025.
//
#include<iostream>

int main() {
    int marks;
    std::cout<<"Enter marks: ";
    std::cin>>marks;

    bool isPass = (marks >= 40);

    std::cout << (isPass? "Passed" : "Fail" )<<std::endl;

    return 0;
}




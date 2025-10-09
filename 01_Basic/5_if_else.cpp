//
// Created by ashra on 22/09/2025.
//

#include<iostream>
int main() {
    int num;
    std::cout<<"Enter the age: ";
    std::cin>> num ;

    if (num<18) {
        std::cout<<"Child."<<std::endl;
    }

    else if (num<35) {
        std::cout<<"Young."<<std::endl;
    }

    else {
        std::cout<<"old."<<std::endl;
    }


}
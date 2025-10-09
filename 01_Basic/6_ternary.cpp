//
// Created by ashra on 22/09/2025.
//

#include<iostream>

int main() {
    int num;
    std::cout<<"Enter the age: ";
    std::cin>> num ;

    std::string result = (num>18) ? "Voter" : "Non voter";
    std::cout<< result;

    return 0;
}



//
// Created by USER on 9/17/2025.
//
#include<iostream>
#include<string>

int main() {
    int num;
    std::cout<<"Enter the age: ";
    std::cin>> num;

    if (num<18) {
        std::cout<<"Children"<<std::endl;
    }
    else if (num<35) {
        std::cout<<"Yong"<<std::endl;
    }
    else {
        std::cout<<"Old"<<std::endl;
    }
    //Ternary Operator
    //variable = (condition) ? expressionTrue : expressionFalse;
    std::string result = (num < 18) ? "Non voter." : "Voter.";
    std::cout<< result<<std::endl;

    return 0;
}

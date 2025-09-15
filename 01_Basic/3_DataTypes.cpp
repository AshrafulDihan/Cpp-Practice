//
// Created by USER on 9/11/2025.
//

#include<iostream>
#include<string>
int main() {
    int age = 22;
    double gpa = 3.66;
    char grade = 'A';
    std::string name = "Dihan";
    auto from = "Feni";// from is automatically treated as string
    bool isPass = true; // false

    std::cout<<"Name: "<<name <<std::endl;
    std::cout<<"From: "<<from <<std::endl;
    std::cout<<"Age: "<<age <<std::endl;
    std::cout<<"GPA: " << gpa << std::endl;
    std::cout<<"Gread: "<<grade<<std::endl;
    std::cout<<"Passed: "<< (isPass ? "Yes" : "No")<<std::endl;

    return 0;

}
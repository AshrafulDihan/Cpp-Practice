//
// Created by USER on 9/15/2025.
//

#include<iostream>
#include<string>

int main() {
    //Add strings
    std::string firstName = "Ashraful";
    std::string lastName = "Dihan";
    std::string FullName = firstName + " " + lastName ;
    std::cout<< FullName<<std::endl;//Ashraful Dihan

    //Adding Numbers and Strings
    std::string x = "10";
    std::string y = "20";
    std::string z = x+y;
    std::cout<< z <<std::endl;//1020

    //access strings
    std::string name = "Dihan";

    std::cout<< name[0]<<std::endl;
    std::cout<< name.at(1)<<std::endl;
    std::cout<< name[name.length() - 1]<<std::endl;

    return 0;

}
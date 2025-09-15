//
// Created by USER on 9/13/2025.
//
#include<iostream>
#include<string>

int main() {

    std::string name ="Dihan";
    std::string district;

    std::cout<<"Enter your District: ";
    std::cin>>district;

    int lengthName = name.length();
    int lengthDistrict = district.length();

    std::cout<<"\nHe is "<< name <<"."<<std::endl;
    std::cout<<"He is from "<< district <<"."<<std::endl;
    std::cout<<"\nLength of name:"<< lengthName <<std::endl;
    std::cout<<"Length of district:"<< lengthDistrict<<std::endl;

    return 0;
}





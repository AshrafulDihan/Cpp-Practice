//
// Created by USER on 9/12/2025.
//

#include<iostream>
#include<string>

int main() {
    std::string name;
    int age;
    float height;
    double weight;
    char grad[4];
    int semester;
    const std::string collector = "Ashraful Dihan";
    //collector will always be constant

    //input
    std::cout<<"\n~~~~~ ENTER STUDENT DETAILS ~~~~~~ "<<std::endl;
    std::cout<<"Enter name: ";
    std::getline(std::cin, name);//string name input
    std::cout<<"Enter age: ";
    std::cin>>age;
    std::cout<<"Enter height: ";
    std::cin>>height;
    std::cout<<"Enter weight: ";
    std::cin>>weight;
    std::cout<<"Enter grad: ";
    std::cin>>grad;
    std::cout<<"Enter semester: ";
    std::cin>>semester;

   bool hall = (semester > 3);
//if student above 3 semester, then he will get hall seat

// OUTPUT
    std::cout << "\n~~~ Student Info ~~~ \n"
    << "Name    : "<<name << "\n"
    << "AGE     : " << age << "\n"
    << "Height  : "<< height << "\n"
    << "Weight  : "<< weight << "\n"
    << "Grad    : "<< grad << "\n"
    << "Semester: "<< semester << "\n"
    <<  "Hall Allocation   : "<<(hall ? "Yes" : "No")
    <<"\nData collected by : "<<collector << std::endl;

    return 0;
}
//
// Created by ashra on 31/10/2025.
//
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a = 10;
  int b = 20;
  int x,y;

  // Display maximum and minimum between a and b
  cout<<"Maximum: "<<max(a,b)<<endl;//for 2 value
  cout<<"Minimum: "<<min(a,b)<<endl;
  //input to more numbers
  cout<<"Enter value of x & y: ";
  cin>>x >>y;

  //find maximum among all four numbers
  int z = max({a,b,x,y});
  cout<<"All max= "<<z<<endl;

  // Swap values of a and b
  swap(a,b);
  cout<<"a= "<<a<<endl;
  cout<<"b= "<<b<<endl;

  return 0;
}
//
// Created by USER on 1/20/2026.
//

//Pair of any two data type .

#include<iostream>
using namespace std;

int main() {

    pair< int , string> p; //declare a pair

    p = {10, "abcd"}; // initialise a pare.
    // p = make_pair(2, "abcd")

    cout << p.first << " " <<p.second << endl; // print

    pair<int , string > &p1 = p; // copying one pare to another ,
    p1.first = 20;
    cout << p.first << " " <<p.second << endl; // print After copying
    cout <<endl;

    //swap

    int a[] = {1,2,3};
    int b[] = {5,6,7};

    pair<int , int> p_arr[3];

    p_arr[0] = {1,5};
    p_arr[1] = {2,6};
    p_arr[2]  ={3, 7};

    swap(p_arr[0], p_arr[2]);

    for (int i = 0; i<3 ; i++) {
        cout<<p_arr[i].first <<"  "<<p_arr[i].second<<endl;
    }



}
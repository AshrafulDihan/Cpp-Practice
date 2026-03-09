//
// Created by USER on 3/3/2026.
//

#include<bits/stdc++.h>

using namespace std;

void PrintVec(vector<int> &v) {

    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v1 = {10, 20, 30, 40};

    PrintVec(v1);  //Output : 10 20 30 40

    vector<int>  &v2 = v1;
    v2.push_back(88);

    PrintVec(v2); //Output : 10 20 30 40 88

    PrintVec(v1); //Output : 10 20 30 40 88
                    // 88 also add v;

    return 0;
}
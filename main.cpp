#include <bits/stdc++.h>
#include "Model/RubiksCube1d.cpp"
using namespace  std;


int main() {
     cout << "RUBIKS CUBE TESTING" << endl;
    RubiksCube1d cube1d;
    cube1d.print();
     for(auto m:cube1d.randomShuffleCube(3)) {
         cout<<cube1d.getMove(m)<<" ";
     }
    cout<<endl;
     cube1d.print();
     return 0;
}



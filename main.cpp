#include <bits/stdc++.h>
#include "Model/RubiksCube3d.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
// #include "Model/RubiksCube3dArray.cpp"
// #include "Model/RubiksCube1dArray.cpp"
// #include "Model/RubiksCubeBitboard.cpp"
//#include "PatternDatabases/CornerPatternDatabase.h"
#include "PatternDatabases/CornerDBMaker.h"
using namespace  std;


int main() {
    // CornerDBMaker Testing --------------------------------------------------------------------------
    const string fileName = R"(C:\Users\hp\CLionProjects\RubiksCubeSolver\Databases\cornerDepth5V1.txt)";

    // Code to create Corner Database
    // CornerDBMaker dbMaker(fileName, 0x99);
    // dbMaker.bfsAndStore();

    RubiksCubeBitBoard cube;
    auto shuffleMoves = cube.randomShuffleCube(15);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";
    IDAstarSolver<RubiksCubeBitBoard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();
    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    return 0;
}



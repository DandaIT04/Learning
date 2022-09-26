//
//
//   4  9 
//  2    5
// 1  6  7    
//  3  8
//  10 
//
//
//

// Traverse the graph using dfs
// somehow find shortest path from 1 -> 5 -> 9
// or if path detects 5 -> 9  combination, stop and print? idk

#include <iostream>;
#include <bits/stdc++.h>;

vector<int>storeCombinations[9999];
int visitedNode[10];

using namespace std;

// create a something to store number combinations e.g 1->2->4
// create a something to store if that number has been visited -> 0 to 1
// create recursive dfs thing to search tree to find 5 -> 9\

int main(){
    
    for int(i=0,i<visitedNode,i++){
        visitedNode[i] = 0;
    }
    
    storeCombinations[1].push_back(2);
    storeCombinations[2].push_back(1);
    storeCombinations[1].push_back(3);
    storeCombinations[3].push_back(1);
    storeCombinations[2].push_back(4);
    storeCombinations[4].push_back(2);    
    storeCombinations[3].push_back(10);
    storeCombinations[10].push_back(3);
    storeCombinations[2].push_back(6);
    storeCombinations[6].push_back(2);
    storeCombinations[3].push_back(6);
    storeCombinations[6].push_back(3);    
    storeCombinations[10].push_back(8);
    storeCombinations[8].push_back(10);
    storeCombinations[6].push_back(8);
    storeCombinations[8].push_back(6);
    storeCombinations[6].push_back(7);
    storeCombinations[7].push_back(6);
    storeCombinations[8].push_back(7);
    storeCombinations[7].push_back(8);
    storeCombinations[6].push_back(5);
    storeCombinations[5].push_back(6);
    storeCombinations[7].push_back(5);
    storeCombinations[5].push_back(7);
    storeCombinations[5].push_back(9);
    storeCombinations[9].push_back(5);    
}

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

using namespace std;

// create a something to store number combinations e.g 1->2->4
// create a something to store if that number has been visited -> 0 to 1
// create recursive dfs thing to search tree to find 5 -> 9\

void continueDFS(int i,vector<int>storeCombinations[],int visitedNode[]){
    visitedNode[i] = 1;
    cout<<i+1<<" ";
    
    for (int j:storeCombinations[i]){
        if(visitedNode[j] == 0){
            continueDFS(j,storeCombinations,visitedNode);
        }
    }
}

void performDFS(vector<int>storeCombinations[],int numberOfNodes,int visitedNode[]){
    for (int i=0;i<numberOfNodes;i++){
        if(visitedNode[i]==0){
            continueDFS(i,storeCombinations,visitedNode);
        }
    }
}

int main(){
    vector<int>storeCombinations[10];
    int visitedNode[10];
    
    int numberOfNodes = 10;
    
    for (int i=0;i<numberOfNodes;i++){
        visitedNode[i] = 0;
    }
    
    storeCombinations[0].push_back(1);
    storeCombinations[1].push_back(3);
    storeCombinations[1].push_back(5);
    storeCombinations[5].push_back(6);
    storeCombinations[6].push_back(4);
    storeCombinations[4].push_back(8);
    storeCombinations[6].push_back(7);
    storeCombinations[7].push_back(5);
    storeCombinations[7].push_back(9);
    storeCombinations[9].push_back(2);
    storeCombinations[2].push_back(5);
    storeCombinations[2].push_back(0);
    
    performDFS(storeCombinations,numberOfNodes,visitedNode);
    
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void convert(vector<int>&convert,int n){
    while(n){
        convert.push_back(n%10);
        n /= 10;
    }
    
}

int digitBites(int n){
    if(n <= 9){
        return 1;
    }
    vector<int>convertVector;
    convert(convertVector,n);
    int minSteps = INT_MAX;
    for(int i = 0 ;i < convertVector.size();i++){
        if(convertVector[i] == 0){
            continue;
        }
        minSteps = min(minSteps, 1 + digitBites(n - convertVector[i]));

    }
    return minSteps;
    
}

int main() {
    int n;
    cin >> n;
    cout << digitBites(n) << endl;
    return 0;
}

/*if you want to get the minimum depth for a lot of subtrees look for the line that i just put */

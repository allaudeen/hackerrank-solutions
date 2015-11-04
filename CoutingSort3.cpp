#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    map<int,int> ar;
    int nInput;
    char strInput[10];
    for(int i = 0; i < n; i++) {
        cin>>nInput>>strInput;
        
        if(ar.size() == 0 || ar.find(nInput) == ar.end()) 
            ar.insert(pair<int,int>(nInput,1));
        else if(ar.find(nInput) != ar.end())
            ar.insert(pair<int,int>(nInput,(ar.find(nInput)->second)++));
    }
    int nTotalOccurence = 0;
    
    for(int i = 0; i < 100; i++) {
        if(ar.find(i) == ar.end())
            cout<<nTotalOccurence<<" ";
        else {
            nTotalOccurence += ar.find(i)->second;
            cout<<nTotalOccurence<<" ";
        }
    }
    return 0;
}


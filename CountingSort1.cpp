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
    for(int i = 0; i < n; i++) {
        cin>>nInput;
        
        if(ar.size() == 0 || ar.find(nInput) == ar.end()) 
            ar.insert(pair<int,int>(nInput,1));
        else if(ar.find(nInput) != ar.end())
            ar.insert(pair<int,int>(nInput,(ar.find(nInput)->second)++));
    }
    
    for(int i = 0; i < 100; i++) {
        if(ar.find(i) == ar.end())
            cout<<0<<" ";
        else
            cout<<ar.find(i)->second<<" ";
    }
    return 0;
}

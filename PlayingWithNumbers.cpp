#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int myAccumulate (int accumulated, int accumulateIncrement) 
{
    int retValue = 0;
    if (accumulateIncrement >= 0)
    {
        retValue = accumulated + accumulateIncrement;
    }
    else
    {
        retValue = accumulated + std::abs(accumulateIncrement);
    }
    return retValue;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    
    vector<int> NVector;
    int tempValue;
    for(int i = 0; i < N; i++){
        cin>>tempValue;
        NVector.push_back(tempValue);        
    }
    
    int Q;
    cin>>Q;
    
    vector<int> QVector;
    for(int i = 0; i < Q; i++){
        cin>>tempValue;
        QVector.push_back(tempValue);        
    }
   
    for(int i = 0; i < Q; i++){
        for(int& Qi : NVector) {
            Qi += QVector[i];
        }
        int sum = std::accumulate(NVector.begin(), NVector.end(), 0, myAccumulate);
        cout<<sum<<endl;
    }
   
    return 0;
}

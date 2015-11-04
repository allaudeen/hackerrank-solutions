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
    
    int nInput;
    map<int,int> nList;
    map<int,int>::iterator nListIter;
    for(int i = 0; i < n; i++) {
        cin>>nInput;
        if(nList.size() == 0 || nList.find(nInput) == nList.end())
            nList.insert(pair<int,int>(nInput,1));
        else if(nList.find(nInput) != nList.end())
            nList.insert(pair<int,int>(nInput,(nList.find(nInput)->second)++));
    }
                         
    int m;
    cin>>m;
    
    int mInput;
    map<int,int> mList;
    map<int,int>::iterator mListIter;
    for(int i = 0; i < m; i++) {
        cin>>mInput;
        if(mList.size() == 0 || mList.find(mInput) == mList.end())
           mList.insert(pair<int,int>(mInput,1));
        else if(mList.find(mInput) != mList.end())
			mList.insert(pair<int,int>(mInput,(mList.find(mInput)->second)++));
    }
                         

    for(mListIter = mList.begin(); mListIter != mList.end(); mListIter++) {
        if(nList.find(mListIter->first) == nList.end()) {
            cout<<mListIter->first<<" ";
        }
        else if(nList.find(mListIter->first)->second < mListIter->second) {
            cout<<mListIter->first<<" ";
        }
    }
        
    return 0;
}

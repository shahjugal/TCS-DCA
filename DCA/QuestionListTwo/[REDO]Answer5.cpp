#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

bool isValidCandidate(string s){
    for (auto &&i : s)
    {
        if(i < '0' || i >= '9'){
            return false;
        }
    }
    return true;
}


int main(){

    int maxVal = INT_MIN;

    string s;    cin >> s;
    string last;
    for (int i = 0; i < s.size(); i++)
    {
        
        if(s[i]==' '){
            if(isValidCandidate(last))
                maxVal = max(maxVal, stoi(last));
            last.clear();
            continue;
        }
        last.push_back(s[i]);
    }
    if(isValidCandidate(last))
    maxVal = max(maxVal, stoi(last));
    
    if(maxVal == INT_MIN){
        cout << -1 << endl;
        return 0;
    }
    cout << maxVal;
    
}
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    const double PI = 3.14159;
    int r;
    cin >> r;
    if(r < 20 || r > 30){
        cout << "Wrong Radius Entry" << endl;
        return 0;
    }
    cout << PI * (double)(r * r);
    return 0;
}
#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    int oC = 0; 

    if(n < 1 || n > 1000){
        cout << "Wrong Input" << endl;
        return 0;
    }

    while(n){
        if(n&1) oC++;
        n = n >> 1;
    }

    if(oC&1){
        cout << "Odd Parity" << endl;
    }else{
        cout << "Even Parity" << endl;
    }

}
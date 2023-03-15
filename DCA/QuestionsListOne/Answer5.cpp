#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

/* 

    R1(or rate1) : 20
    X1 Value of N in hours for which rate 1 applies: 4
    R2(or rate2) : 40
    X Total Travel Time : 300 in hourse 5

    Total Fare : (X-X1)*R2 + X1*R1  if X < X1 first term should be 0 instead of -ve.
                 (5-4)*40 + 4*20
                 40 + 80
                 120 INR



*/

int main(){

    // Taking input.
    int R1, X1, R2, X;

    cin >> R1 >> X1 >> R2 >> X;

    // Now we know that X is in minute so we convert it to hours.

    X = X/60 + (X%60!=0);
    cout << X << endl;

    // Now if X < X1 then,

    if(X < X1){
        cout << X * R1 << endl;
        return 0;
    }

    cout << (X-X1)*R2 + X1*R1 << endl;

    return 0;
}
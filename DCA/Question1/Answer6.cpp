#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

int helper(int R, int G, int T, char last = ' '){

    if(R == 0 && G == 0 && T == 0){
        // No elements left.
        // if we created a string then return 1.
        if(last != ' ')
            return 1;
        // otherwise return 0.
        return 0;
    }

    
    int cand1 = 0, cand2 = 0, cand3 = 0;

    // last character was 'R'
    if(last == 'R'){
        // We can add G or T.

        // Lets add G.

        if(G > 0)
            cand1 = helper(R, G-1, T, 'G');

        // Lets add T.
        if(T > 0)
            cand2 = helper(R, G, T-1, 'T');

    }

    // last character was 'G'
    else if(last == 'G'){
        // We can add G or T.

        // Lets add R.

        if(R > 0)
            cand1 = helper(R-1, G, T, 'R');

        // Lets add T.
        if(T > 0)
            cand2 = helper(R, G, T-1, 'T');

    }

    // last character was 'T'
    else if(last == 'T'){
        // We can add G or T.

        // Lets add R.

        if(R > 0)
            cand1 = helper(R-1, G, T, 'R');

        // Lets add T.
        if(G > 0)
            cand2 = helper(R, G-1, T, 'G');

    }
    // if just started.
    else{
        // Lets add R.
        if(R > 0)
            cand1 = helper(R-1, G, T, 'R');

        // Lets add G.
        if(G > 0)
            cand2 = helper(R, G-1, T, 'G');

        // Lets add T.
        if(T > 0)
            cand3 = helper(R, G, T-1, 'T');
    }

    return cand1 + cand2 + cand3;
}

int main(){

    // Taking input.
    int R, G, T;
    cin >> R >> G >> T;

    cout << helper(R, G, T);

    return 0;
}
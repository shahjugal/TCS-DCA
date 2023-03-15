// Marked as Unsolved.

#include <iostream>

using namespace std;

// Returns no of ways to get targetted amount of money.
// 0 means we started just.
int helper(int target, int lastNo = 0){

    // We found one of the ways to do it.
    if(target==0)
        return 1;

    // We overshooted the value.
    if(target < 0)
        return 0;

    int cand1 = 0, cand2 = 0;

    // if we just started or lastNo was 1 then we can just take any coin.
    if(lastNo != 2){

        // Take a 1 rupee coin.
        cand1 = helper(target-1, 1);

        // Take a 2 rupee coin.
        cand2 = helper(target-2, 2);

    }else{
        // Take a 1 rupee coin if last was 2.
        cand1 = helper(target-1, 1);
    }

    return cand1 + cand2;

}

int main(){
    int no; cin >> no;
    cout << helper(no);
}
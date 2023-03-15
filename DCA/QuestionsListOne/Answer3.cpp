#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    // Taking input.
    int N; cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < N; i++){
        // first loop for non-multiples of 10.
        if(arr[i]%10) cout << arr[i] << ' ';
    }

    for (int i = 0; i < N; i++){
        // second loop for multiples of 10.
        if(arr[i]%10==0) cout << arr[i] << ' ';
    }
    

    return 0;
}
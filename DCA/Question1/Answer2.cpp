#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 

N = 5

{10, 20, 30, 40, 50}

K = 2

*/

int main(){

    // Taking input.
    int N; cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int k;  cin >> k;

    // Now let's rotate.
    
    for(int i = N - k; i < N; i++){
        cout << arr[i] << ' ';
    }

    for(int i = 0; i < N-k; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}
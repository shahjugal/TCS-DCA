#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> arr(n);

    for(auto&& i : arr) cin >> i;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        if((i == 0 || arr[i] < arr[i-1]) && (i == n-1 || arr[i] < arr[i+1])){
            cnt++;
        }
    }

    cout << cnt;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Check if current no has repeating digits.
bool isValid(int v){
    
    int arr[10] = {0};

    while (v)
    {
        int digit = v%10;

        // if we already encountered current digit.
        if(arr[digit] == 1){
            return false;
        }else{
            arr[digit] = 1;
        }

        v/=10;
    }
    
    // So we found that occurence of all digits were unqiue.
    return true;

}

int main(){

    int n1 = 101, n2 = 200;
    cin >> n1 >> n2;

    // Tracks count of valid numbers.
    int count = 0;

    for(int i = n1; i <= n2; i++){
        count += isValid(i);
    }

    cout << count << endl;

    return 0;
}
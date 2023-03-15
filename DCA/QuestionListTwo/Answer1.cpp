#include <iostream>

using namespace std;

void com(int& n){
    int value = 0;
    while(n){
        value += n%10;
        n/=10;
    }
    n = value;
    if(n > 9){
        com(n);
    }
}

int main(){
    int n;  cin >> n;
    com(n);
    if(n==1) cout << "UNO";
    else cout << "not";
    cout << endl;
}
#include <iostream>

using namespace std;


int main(){
    // {X, Y}
    pair<int, int> pos = {0,0};

    string s;   cin >> s;

    for (auto &&i : s)
    {
        switch (i)
        {
        case 'N':
            pos.second--;
            break;
        case 'S':
            pos.second++;
            break;
        case 'E':
            pos.first--;
            break;
        case 'W':
            pos.first++;
            break;
        
        default:
            break;
        }
    }
    
    if(pos.first == 0 && pos.second == 0)
        cout << "Returned successfully";
    else
        cout << "Not returned successfully";
    cout << endl;
}
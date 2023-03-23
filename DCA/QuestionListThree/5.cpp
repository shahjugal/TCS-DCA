#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int>& pages, int& pagePerPerson, int & fN){
    int cnt = 0;

    for(int i = 0; i < pages.size(); i++){
        while(pages[i] > pagePerPerson){
            pages[i]-=pagePerPerson;
            cnt++;
        }
    }

    return (cnt >= fN);
}

int main(){
    int n;   cin >> n;
    int fN;  cin >> fN;
    vector<int> pages(n);
    for (auto &&i : pages){
        cin >> i;
    }
    int s = 0, e = INT_MAX;
    int m = s + (e-s)/2;
    int res = -1;
    while(s < e){
        if(isPossible(pages, m, fN)){
            res = m;
            s = m + 1;
        }else{
            e = m - 1;
        }
        m = s + (e-s)/2;
    }

    cout << "Max Pages per person possible is: " << res << endl;
}



// equally divide
// max no of pages to each person.
// no one should get pages from more than one novel.


// BBBBBBBIIIIIIINNNNNNNARYYYYYY SEEEEEEEAAAAAAAAAARCCCCCCCCCCCHHHHHHHHHH!!!!!
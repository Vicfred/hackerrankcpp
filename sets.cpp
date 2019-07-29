#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> numbers;
    int Q;
    cin >> Q;
    while(Q--) {
        int type, x;
        cin >> type >> x;
        if(1 == type)
            numbers.insert(x);
        if(2 == type)
            numbers.erase(x);
        if(3 == type) {
            cout << (((numbers.count(x)) > 0) ? "Yes" : "No") << endl;
        }
    }
    return 0;
}


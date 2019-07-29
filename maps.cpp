#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string,int> marks;
    int Q;
    cin >> Q;
    while(Q--) {
        int type, y;
        string x;
        cin >> type;
        if(1 == type) {
            cin >> x >> y;
            marks[x] += y;
        }
        if(2 == type) {
            cin >> x;
            marks[x] = 0;
        }
        if(3 == type) {
            cin >> x;
            cout << marks[x] << endl;
        }
    }
    return 0;
}


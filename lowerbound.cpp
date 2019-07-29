#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    for(int& x: X)
        cin >> x;
    int Q;
    cin >> Q;
    int Y;
    for(int i = 0; i < Q; ++i) {
        cin >> Y;
        auto lower = lower_bound(X.begin(), X.end(), Y);
        if(*lower == Y)
            cout << "Yes ";
        else
            cout << "No ";
        cout << lower-X.begin()+1 << endl;
    }
    return 0;
}


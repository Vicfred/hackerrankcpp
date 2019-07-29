#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> queries;
    for(int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        vector<int> a(k);
        for(int j = 0; j < k; ++j) {
            cin >> a[j];
        }
        queries.push_back(a);
    }
    for(int p = 0; p < q; ++p) {
        int i, j;
        cin >> i >> j;
        cout << queries[i][j] << endl;
    }
    return 0;
}


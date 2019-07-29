#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> input(N);
    for(int idx = 0; idx < N; ++idx)
        cin >> input[idx];
    for(int idx = N-1; idx >= 0; --idx)
        cout << input[idx] << " ";
    cout << endl;
    return 0;
}


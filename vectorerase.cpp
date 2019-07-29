#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> numbers(N+1);
    for(int i = 1; i <= N; ++i)
        cin >> numbers[i];
    int i,j,k;
    cin >> i;
    numbers.erase(numbers.begin()+i);
    cin >> j >> k;
    numbers.erase(numbers.begin()+j, numbers.begin()+k);
    numbers.erase(numbers.begin());
    cout << numbers.size() << endl;
    for(int idx: numbers)
        cout << idx << " ";
    cout << endl;
    return 0;
}


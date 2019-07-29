#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(max(max(a,b),c),d) << endl;
    return 0;
}


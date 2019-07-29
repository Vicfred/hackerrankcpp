#include <iostream>
#include <string>

using namespace std;

void shout(int n) {
    if(1 == n)
        cout << "one" << endl;
    else if(2 == n)
        cout << "two" << endl;
    else if(3 == n)
        cout << "three" << endl;
    else if(4 == n)
        cout << "four" << endl;
    else if(5 == n)
        cout << "five" << endl;
    else if(6 == n)
        cout << "six" << endl;
    else if(7 == n)
        cout << "seven" << endl;
    else if(8 == n)
        cout << "eight" << endl;
    else if(9 == n)
        cout << "nine" << endl;
    else if(0 == n%2)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; ++i)
        shout(i);
    return 0;
}


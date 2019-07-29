#include <sstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch;
    int a;
    vector<int> ints;
    while(!ss.eof()) {
        ss >> a;
        if(!ss.eof())
            ss >> ch;
        ints.push_back(a);
    }
    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); ++i)
        cout << integers[i] << endl;
    return 0;
}


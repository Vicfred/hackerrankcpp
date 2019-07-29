#include <cstdio>
#include <cmath>

using namespace std;

void update(int &a,int &b) {
    // Complete this function    
    int newa = a+b;
    int newb = abs(a-b);
    a = newa;
    b = newb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(a, b);
    printf("%d\n%d", a, b);

    return 0;
}


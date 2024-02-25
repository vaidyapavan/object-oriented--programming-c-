#include <iostream>
using namespace std;

void add(int x, int y) {
    int sum;
    sum = x + y;
    cout << "sum is: " << sum << endl;
}

void add(float a, float b) {
    float sum1;
    sum1 = a + b;
    cout << "sum is: " << sum1 << endl;
}

int main() {
    cout << "hello" << endl;
    add(11, 5);
    return 0;
}

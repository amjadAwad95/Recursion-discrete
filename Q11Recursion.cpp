#include<iostream>

using namespace std;

long binaryC(int x);

int main() {
    cout << binaryC(888) << endl;
}
long binaryC(int x) {
    static long r, biNo, factor = 1;
    while (x != 0) {
        r = x % 2;
        biNo = biNo + r * factor;
        factor = factor * 10;
        return binaryC(x / 2);
    }
    return biNo;
}

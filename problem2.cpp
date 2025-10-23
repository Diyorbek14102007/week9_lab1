#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        cout << n << " ";
    }
}

int main() {
    printNumbers(50);
    return 0;
}
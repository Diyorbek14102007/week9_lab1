#include <iostream>
using namespace std;

double series(int n) {
    if (n == 1)
        return 1.0;
    else
        return series(n - 1) + 1.0 / (n * n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << series(n);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int f(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * (n / 2) * f(n - 2);
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    int result = f(n);
    cout << "Hasil f(" << n << ") = " << result << endl;
    return 0;
}
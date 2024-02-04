#include <iostream>

using namespace std;

int fibonacciAtN (int n) {

    if (n == 1) {
        return 0;
    }// base case

    if (n == 2) {
        return 1;
    } // base case

    // rr
    int ans = fibonacciAtN(n - 1) + fibonacciAtN(n - 2);

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << "Value at " << n << " in fibonacci series: " << fibonacciAtN(n) << endl;

    return 0;
}

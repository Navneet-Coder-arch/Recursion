#include <iostream>

using namespace std;

//finding factorial of a number (using recursion)
int factorial (int n) {

    if (n == 0) { // base case
        return 1;
    }

    int ans = n * factorial(n - 1); // rr

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << "Factorial: " << factorial(n) << endl;

    return 0;
}

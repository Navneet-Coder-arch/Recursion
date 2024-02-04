#include <iostream>

using namespace std;

//function to find the sum of digits of a number (using recursion)
int sumOfDigits (int n) {

    //base case
    if (n == 0) {
        return 0;
    }

    // rr
    int sum = (n % 10) + sumOfDigits(n / 10);

    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << "Sum of digits: " << sumOfDigits(n) << endl;

    return 0;
}

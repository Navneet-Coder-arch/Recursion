#include <iostream>

using namespace std;

//function to check if the given number prime or not
bool isPrime (int n) {

    if (n < 2) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

//function to find the sum of prime in the given range
int sumPrimes (int a, int b) {

    //base case
    if (a == b) {

        if (isPrime(a)) {
            return  a;
        }

        else {
            return 0;
        }

    }

    int temp = 0;

    if (isPrime(a)) {
        temp = a;
    }

    //rc
    return temp + sumPrimes(a + 1, b);

}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Sum of primes: " << sumPrimes(a, b) << endl;

    return 0;
}

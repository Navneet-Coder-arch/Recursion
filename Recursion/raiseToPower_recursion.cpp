#include <iostream>

using namespace std;

//function to find the power of a number
long long calculatePower(int n, int power) {

    //base case
    if (power == 1) {
        return (long long)n;
    }

    return (long long)calculatePower(n, power - 1) * n;

}

int main() {
    int n, power;

    cin >> n >> power;

    cout << n << " raise to the power " << power << ": " << calculatePower(n, power) << endl;

    return 0;
}

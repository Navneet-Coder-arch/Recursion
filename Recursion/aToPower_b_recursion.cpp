#include <iostream>

using namespace std;

// function to find a raise to power b
long long int a_ToPower_b (int a, int b) {

    if (b == 0) {
        return 1;
    }

    return (long long int)a_ToPower_b(a, b - 1) * a;

}

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << " raise to the power of " << b << ": " << a_ToPower_b(a, b) << endl;

    return 0;
}

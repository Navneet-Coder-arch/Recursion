#include <iostream>

using namespace std;

//function to find a raise to power b
long long int a_ToPower_b (int a, int b) {

    if (b == 0) {
        return 1;
    }

    long long int temp = a_ToPower_b(a, b / 2);

    if (b & 1) {
        return temp * temp * a;
    }

    else {
        return temp * temp;
    }

}

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << " raise to power " << b << ": " << a_ToPower_b(a, b) << endl;

    return 0;
}

#include <iostream>

using namespace std;

//function to find the sum of even in the given range
int sumEven(int a, int b) {

    //base case
    if (a == b) {

        if (a & 1) {
            return 0;
        }

        else {
            return a;
        }

    }

    int temp = a;

    if (a & 1) {
        temp = 0;
    }

    //rc
    return temp + sumEven(a + 1, b);

}

//function to find the sum of odd in the given range
int sumOdd(int a, int b) {

    //base case
    if (a == b) {

        if (a & 1) {
            return a;
        }

        else {
            return 0;
        }

    }

    int temp = 0;

    if (a & 1) {
        temp = a;
    }

    //rc
    return temp + sumOdd(a + 1, b);

}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Sum of evens: " << sumEven(a, b) << endl;
    cout << "Sum of odds: " << sumOdd(a, b) << endl;

    return 0;
}

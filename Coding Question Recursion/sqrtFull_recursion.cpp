#include <iostream>

using namespace std;

//function to find the square root of a number
int squareRoot (int start, int end, int n) {

    //base case
    if (start > end) {
        return end;
    }

    int mid = (start + end) / 2;
    int sqr = mid * mid;

    if (sqr == n) {
        return mid;
    }

    else if (sqr < n) {
        return squareRoot(mid + 1, end, n);
    }

    else {
        return squareRoot(start, mid - 1, n);
    }

}

//function to increase precision of halfSol
double morePrecision (int n, int precision, int halfSol) {

    double halfSol_d = (double)halfSol;
    double toAdd = 1;

    for (int i = 0; i < precision; i++) {

        toAdd /= 10;

        while (true) {

            if ((halfSol_d + toAdd) * (halfSol_d + toAdd) >= n) {

                break;

            }

            halfSol_d += toAdd;

        }

    }

    return halfSol_d;
}

int main() {
    int n;
    cin >> n;

    int halfSol = squareRoot(0, n, n);
    double fullSol = morePrecision(n, 3, halfSol);

    cout << "Square Root: " << fullSol << endl;

    return 0;
}

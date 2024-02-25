#include <iostream>

using namespace std;

//function to find the gcd of two given numbers a & b
int gcd (int a, int b) {

    //base case
    if (a == 0) {return b;}
    if (b == 0) {return a;}

    //rc
    if (a > b) {
        return gcd(a - b, b);
    }

    else {
        return gcd(b - a, a);
    }

}

int main() {

    int a, b;
    cin >> a >> b;

    cout << "Gcd: " << gcd(a, b) << endl;

    return 0;
}

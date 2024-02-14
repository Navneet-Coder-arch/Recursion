

#include <iostream>

using namespace std;

const string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

//function to say any digit (recursive)
void sayDigit(int n) {

    //base case
    if (n == 0) {
        return;
    }

    //rc
    sayDigit(n/10);

    int digit = n % 10;
    cout << arr[digit] << ' ';

    return;
}

int main() {
    int n;
    cin >> n;

    sayDigit(n);

    return 0;
}

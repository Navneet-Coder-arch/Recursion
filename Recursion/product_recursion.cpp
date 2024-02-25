#include <iostream>

using namespace std;

//function to find the product of two number without using '*' operator
int product(int a, int b) {

    //base case
    if (b == 0) {
        return 0;
    }

    //rc
    return a + product(a, b - 1);

}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Product: " << product(a, b) << endl;

    return 0;
}

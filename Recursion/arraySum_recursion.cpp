#include <iostream>

using namespace std;

//function to find the sum of elements of the array (using recursion)
int arraySum (int* arr, int n) {

    if (n == 1) { // base case
        return arr[0];
    }

    // rr
    return arr[n - 1] + arraySum(arr, n - 1);

}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of elements: " << arraySum(arr, n) << endl;

    return 0;
}

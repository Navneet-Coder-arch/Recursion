#include <iostream>

using namespace std;

//function to check the array, wether it is sorted or not
bool isSorted(int arr[], int n) {

    //base case
    if (n == 0 || n == 1) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    }

    else {

        bool ans = isSorted(arr + 1, n - 1);
        return ans;

    }

}

int main() {
    int arr[6] = {1, 2, 3, 4, 6, 5};

    if (isSorted(arr, 6)) {
        cout << "Array is sorted" << endl;
    }

    else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}

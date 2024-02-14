#include <iostream>

using namespace std;

//function for checking that the key is found in the array or not
bool linearSearch(int* arr, int n, int key) {

    //base case
    if (n == 1) {
        if (arr[0] == key) {
            return true;
        }

        else {
            return false;
        }
    }

    //processing
    if (arr[0] == key) {
        return true;
    }
    else {
        return linearSearch(arr + 1, n - 1, key);
    }

}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    if (linearSearch(arr, n, key)) {
        cout << "Element Found!!" << endl;
    }

    else {
        cout << "Element Not Found" << endl;
    }

    delete[] arr;
    arr = NULL;

    return 0;
}

#include <iostream>

using namespace std;

//function to check whether the element is found in the array or not (using recursion)
bool binarySearch(int* arr, int start, int end, int key) {

    if (start > end) {
        return false;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key) {
        return true;
    }

    else if (arr[mid] > key) {
        return binarySearch(arr, start, mid - 1, key);
    }

    else {
        return binarySearch(arr, mid + 1, end, key);
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

    if (binarySearch(arr, 0, n - 1, key)) {
        cout << "Key Found!!" << endl;
    }

    else {
        cout << "Key not found!!" << endl;
    }

    delete[] arr;
    arr = NULL;

    return 0;
}

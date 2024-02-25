#include <iostream>

using namespace std;

#define size 6

//selection sort
void selectionSort (int arr[], int n) {

    //base case
    if (n == 0 || n == 1) {
        return;
    }

    for (int i = 1; i < n; i++) {
        if (arr[0] > arr[i]) {
            swap(arr[0], arr[i]);
        }
    }

    //rc
    selectionSort(arr + 1, n - 1);

}

int main() {
    int arr[size] = {56, 94, 12, 47, 0, -1111};

    selectionSort(arr, size);

    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}

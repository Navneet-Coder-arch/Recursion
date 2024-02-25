#include <iostream>

using namespace std;

#define size 6

//bubble sort algorithm
void bubbleSort(int arr[], int n) {

    //base case
    if (n == 0 || n == 1) {
        return;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    //rc
    bubbleSort(arr, n - 1);

}

int main() {
    int arr[size] = {56, 94, 12, 47, 0, -1111};

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}

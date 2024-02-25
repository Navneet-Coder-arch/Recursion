#include <iostream>
#include <vector>

using namespace std;

//function to print the array
void printArray (int arr[], int size) {

    cout << endl;

    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;
    return;

}

//function to merge two sorted arrays
void merge (int arr[], int start, int mid, int end) {

    vector<int> tempMerge;

    int i = start, j = mid + 1;

    while (i <= mid && j <= end) {

        if (arr[i] < arr[j]) {
            tempMerge.push_back(arr[i++]);
        }

        else {
            tempMerge.push_back(arr[j++]);
        }

    }

    while (i <= mid) {
        tempMerge.push_back(arr[i++]);
    }

    while (j <= end) {
        tempMerge.push_back(arr[j++]);
    }

    //copying elements
    for (int k = 0; k < tempMerge.size() && start <= end; k++) {

        arr[start++] = tempMerge[k];

    }

    return;

}

//function to implement the first step of merge sort (divide)
void mergeSort (int arr[], int start, int end) {

    if (start >= end) return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);

}

int main() {
    int arr[8] = {6, 5, 8, 4, 1, 2, 3, 0};

    mergeSort(arr, 0, 8 - 1);

    printArray(arr, 8);

    return 0;
}

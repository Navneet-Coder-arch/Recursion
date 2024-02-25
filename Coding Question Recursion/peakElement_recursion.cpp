#include <iostream>

using namespace std;

#define size 6

//function to find the peak element in the mountain array
int peakElementInMountainArray (int* arr, int start, int end) {

    //base case
    if (start == end) {
        return start;
    }

    int mid = (start + end) / 2;

    if (arr[mid] < arr[mid + 1]) {
        return peakElementInMountainArray(arr, mid + 1, end);
    }

    else {
        return peakElementInMountainArray(arr, start, mid);
    }

}

int main() {
    int arr[size] = {10, 60, 50, 40, 0, -10};

    cout << "Peak Element found at index: " << peakElementInMountainArray(arr, 0, size - 1) << endl;

    return 0;
}

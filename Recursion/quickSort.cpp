#include <iostream>

using namespace std;

//function to find the pivot in array accoring to quick sort algo
int pivotQS (int arr[], int start, int end) {

    int pivot = arr[start];
    int i = start, j = end;

    while (i < j) {

        while (arr[i] <= pivot && i < end) {
            i++;
        }

        while (arr[j] > pivot && j > start) {
            j--;
        }

        if (i < j) swap(arr[i], arr[j]);

    }

    swap(arr[start], arr[j]);
    
    return j;

}

//function to perform quick sort
void quickSort(int arr[], int start, int end) {

    if (start < end) {

        int pivot = pivotQS(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);

    }

    return;
}

int main() {
    int arr[6] = {-1 ,5 , 2, 1, 6, 7};

    quickSort(arr, 0, 6 - 1);

    //printting array
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}

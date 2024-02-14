#include <iostream>

using namespace std;

#define size 5

//function to find the maximum element in the array
int maxInArray(int arr[], int n) {

    //base case
    if (n == 1) {return arr[0];}

    int var = maxInArray(arr + 1, n - 1);

    return (var > arr[0]) ? var : arr[0];

}

//function to find the minimum element int the array
int minInArray(int arr[], int n) {

    //base case
    if (n == 1) {return arr[0];}

    int var = minInArray(arr + 1, n - 1);

    return (var < arr[0]) ? var : arr[0];

}

int main() {
    int arr[size] = {1, 5, 2, 3, 4};

    cout << "Max element in the array: " << maxInArray(arr, size) << endl;
    cout << "Min element in the array: " << minInArray(arr, size) << endl;

    return 0;
}

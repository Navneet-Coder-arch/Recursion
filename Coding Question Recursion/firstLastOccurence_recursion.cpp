#include <iostream>

using namespace std;

#define size 6

//function to find the first occurence of key in the sorted array
int firstOccurence(int* arr, int start, int end, int key) {

    //base case
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key) {
        int temp = firstOccurence(arr, start, mid - 1, key);
    
        if (temp >= 0) {
            return temp;
        }

        else {
            return mid;
        }
    
    }

    else {
        return firstOccurence(arr, mid + 1, end, key);
    }

}

//function to find the last occurence of key in the sorted array
int lastOccurence(int* arr, int start, int end, int key) {

    //base case
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key) {

        int temp = lastOccurence(arr, mid + 1, end, key);

        if (temp >= 0) {
            return temp;
        }

        else {
            return mid;
        }

    }

    else {
        return lastOccurence(arr, start, mid - 1, key);
    }

}

int main() {
    int arr[size] = {1, 2, 3, 3, 4, 5};
    int key = 3;

    int fO = firstOccurence(arr, 0, size - 1, key);
    int lO = lastOccurence(arr, 0, size - 1, key);

    if (fO < 0 && lO >= 0) {
        fO = lO;
    }

    else if (lO < 0 && fO >= 0) {
        lO = fO;
    }

    cout << "First Occurence of key: " << fO << endl;
    cout << "Last Occurence of key: " << lO << endl;

    return 0;
}

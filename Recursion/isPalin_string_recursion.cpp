#include <iostream>

using namespace std;

//function to check if the given string is palin drome or not
bool isPalin(string str, int size) {

    int mid = (0 + (str.size() - 1)) / 2;
    int sizeCopy = size - 1;

    //base case
    if (size <= mid) {
        return true;
    }

    int diff = str.size() - sizeCopy;

    if (str[diff - 1] != str[sizeCopy]) {
        return false;
    }

    isPalin(str, size - 1);

}

int main() {
    string str = "qwerty";

    if (isPalin(str, str.size())) {
        cout << "Palindrome!!" << endl;
    }

    else {
        cout << "Not Palindrome!!" << endl;
    }

    return 0;
}

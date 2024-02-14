#include <iostream>

using namespace std;

//function to reverse the given string
void reverseString(string &str, int size) {

    int mid = (0 + (str.size() - 1)) / 2;
    int sizeCopy = size - 1;

    //base case
    if (size <= mid) {
        return;
    }

    int diff = str.size() - sizeCopy;

    swap(str[diff - 1], str[sizeCopy]);

    reverseString(str, size - 1);

    return;
}

int main() {
    string str = "Hello";

    reverseString(str, str.size());

    cout << "Reversed String: " << str << endl;

    return 0;
}

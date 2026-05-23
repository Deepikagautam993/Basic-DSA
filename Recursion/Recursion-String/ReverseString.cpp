#include <iostream>
using namespace std;

void reverseString(string &str,
                   int left,
                   int right) {

    // Base Case
    if(left >= right)
        return;

    // Self Work
    swap(str[left], str[right]);

    // Recursive Call
    reverseString(str,
                  left + 1,
                  right - 1);
}

int main() {

    string str = "hello";

    reverseString(str, 0, str.length() - 1);

    cout << str;

    return 0;
}

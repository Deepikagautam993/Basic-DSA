#include <iostream>
using namespace std;

void removePi(string &str,
              string &ans,
              int index) {

    // Base Case
    if(index >= str.length())
        return;

    // Check "pi"
    if(index + 1 < str.length() &&
       str[index] == 'p' &&
       str[index + 1] == 'i') {

        removePi(str, ans, index + 2);
    }
    else {

        ans.push_back(str[index]);

        removePi(str, ans, index + 1);
    }
}

int main() {

    string str = "pippxxppiixipi";
    string ans = "";

    removePi(str, ans, 0);

    cout << ans;

    return 0;
}

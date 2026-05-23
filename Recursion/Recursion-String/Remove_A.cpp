#include <iostream>
using namespace std;

void removeA(string &str,
             string &ans,
             int index) {

    // Base Case
    if(index == str.length())
        return;

    // Self Work
    if(str[index] != 'a') {
        ans.push_back(str[index]);
    }

    // Recursive Call
    removeA(str, ans, index + 1);
}

int main() {

    string str = "banana";
    string ans = "";

    removeA(str, ans, 0);

    cout << ans;

    return 0;
}

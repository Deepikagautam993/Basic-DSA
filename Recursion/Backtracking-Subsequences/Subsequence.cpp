#include <iostream>
using namespace std;

void subsequence(string &str,
                 string ans,
                 int index) {

    // Base Case
    if(index == str.length()) {
        cout << ans << endl;
        return;
    }

    // TAKE
    ans.push_back(str[index]);

    subsequence(str, ans, index + 1);

    // BACKTRACK
    ans.pop_back();

    // NOT TAKE
    subsequence(str, ans, index + 1);
}

int main() {

    string str = "abc";
    string ans = "";

    subsequence(str, ans, 0);

    return 0;
}

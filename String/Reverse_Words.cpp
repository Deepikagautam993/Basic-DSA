#include <iostream>
#include <vector>
using namespace std;

string reverseWords(string s) {

    vector<string> words;

    string temp = "";

    for(char ch : s) {

        if(ch != ' ') {
            temp += ch;
        }
        else {

            if(temp != "") {
                words.push_back(temp);
                temp = "";
            }
        }
    }

    if(temp != "") {
        words.push_back(temp);
    }

    string ans = "";

    for(int i = words.size() - 1; i >= 0; i--) {

        ans += words[i];

        if(i != 0) {
            ans += " ";
        }
    }

    return ans;
}

int main() {

    string s = "the sky is blue";

    cout << reverseWords(s);

    return 0;
}

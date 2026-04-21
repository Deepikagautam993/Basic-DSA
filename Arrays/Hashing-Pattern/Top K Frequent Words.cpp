#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<string> topKFrequent(vector<string>& words, int k) {
    
    unordered_map<string, int> freq;

    for(string word : words) {
        freq[word]++;
    }

    vector<string> result;

    for(auto it : freq) {
        result.push_back(it.first);
    }

    sort(result.begin(), result.end(), [&](string &a, string &b) {
        if(freq[a] == freq[b]) {
            return a < b;
        }
        return freq[a] > freq[b];
    });

    result.resize(k);

    return result;
}

int main() {
    vector<string> words = {"i","love","leetcode","i","love","coding"};
    int k = 2;

    vector<string> ans = topKFrequent(words, k);

    cout << "Top K Frequent Words: ";
    for(string word : ans) {
        cout << word << " ";
    }

    return 0;
}

/*There is a collection of input strings and a collection of query strings. For each query string, 
determine how many times it occurs in the list of input strings. Return an array of the results.*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequencyMap;
    vector<int> result;

    // Count the frequency of each string in stringList
    for (const string& str : stringList) {
        frequencyMap[str]++;
    }

    // For each query, get the count from the frequency map
    for (const string& query : queries) {
        result.push_back(frequencyMap[query]);
    }

    return result;
}

int main() {
    int n, q;
    cin >> n;
    vector<string> stringList(n);
    for (int i = 0; i < n; ++i) {
        cin >> stringList[i];
    }

    cin >> q;
    vector<string> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    vector<int> result = matchingStrings(stringList, queries);

    for (int count : result) {
        cout << count << endl;
    }

    return 0;
}

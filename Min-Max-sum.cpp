/*PROBLEM : - find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
Then print the respective minimum and maximum values as a single line of two space-separated long integers.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long long totalSum = 0;
    for(int i = 0; i < 5; i++) {
        totalSum += arr[i];
    }
    long long minSum = totalSum - *max_element(arr.begin(), arr.end());
    long long maxSum = totalSum - *min_element(arr.begin(), arr.end());

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr(5);
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    miniMaxSum(arr);
    return 0;
}

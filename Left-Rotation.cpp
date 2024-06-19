/*A left rotation operation on an array of size  shifts each of the array's elements  unit to the left,
rotate the array that many steps left and return the result.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int>& arr) {
    int n = arr.size();
    vector<int> rotatedArr(n);
    
    for (int i = 0; i < n; ++i) {
        rotatedArr[i] = arr[(i + d) % n];
    }
    
    return rotatedArr;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<int> result = rotateLeft(d, arr);
    
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int>& arr) {
    int n = arr.size();
    vector<int> rotatedArr(n);
    
    for (int i = 0; i < n; ++i) {
        rotatedArr[i] = arr[(i + d) % n];
    }
    
    return rotatedArr;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<int> result = rotateLeft(d, arr);
    
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}

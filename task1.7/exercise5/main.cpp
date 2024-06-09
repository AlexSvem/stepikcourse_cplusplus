#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bool found = false;
    for (int i = 1; i < n &&!found; ++i) {
        if ((arr[i] > 0 && arr[i - 1] > 0) || (arr[i] < 0 && arr[i - 1] < 0)) {
            if (arr[i] > arr[i-1]) {
                cout << arr[i-1] << " " << arr[i];
            } else {
                cout << arr[i] << " " << arr[i-1];
            }
            found = true;
        }
    }
    return 0;
}

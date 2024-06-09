#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int a, min_size;
    min_size = INT_MAX;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < a; ++i) {
        if (s[i] > 0 && s[i] < min_size){
            min_size = s[i];
        }
    }
    cout << min_size << endl;
    return 0;
}

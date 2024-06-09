#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> s(a);
    for (int j = 0; j < a; ++j) {
        cin >> s[j];
    }
    for (int i = 1 ; i < a; ++i) {
        if (s[i] > s[i-1]) {
            cout << s[i] << " ";
        }
    }
    return 0;
}

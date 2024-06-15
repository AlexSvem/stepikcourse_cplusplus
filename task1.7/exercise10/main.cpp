#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; ++i) {
        cin >> s[i];
    }
    cout << s[a-1]<< " ";
    for (int i = 0; i < a-1; ++i) {
        cout << s[i] << " ";
    }
    return 0;
}

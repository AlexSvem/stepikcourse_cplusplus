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
    return 0;
}

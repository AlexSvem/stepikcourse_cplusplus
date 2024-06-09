#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; ++i) {
        cin >> s[i];
    }

    set<int> unique_elements(s.begin(), s.end());
    cout << unique_elements.size() << endl;

    return 0;
}

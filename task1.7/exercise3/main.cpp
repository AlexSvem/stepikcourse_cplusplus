#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, score = 0;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < a; i++) {
        if (s[i] > 0) {
            score++;
        }
    }
    cout << score;
    return 0;
}

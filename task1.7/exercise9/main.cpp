#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n, k, tmp;
    k = 0;
    cin >> n;
    vector <int> a(n);
    //считывание
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //обработка и вывод
    for (int i = 1; i < n; i += 2) {
        cout << a[i] << ' ' << a[i-1] << ' ';
    }
    if (n % 2 == 1) {
        cout << a[n - 1];
    }
}

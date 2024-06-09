#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    //считывание
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //обработка и вывод
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << a[i] << " ";
        }
    }
}

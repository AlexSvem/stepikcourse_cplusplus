#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int min = 0;
    int n, vb = 0;
    cin >> n;
    vector <int> a;
    vector <int> b;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != 0 && a[i] % 2 != 0) {
            vb = a[i];
            b.push_back(vb);
        }
    }
    if (vb == 0) {
        cout << 0;
        return 0;
    }

    min = b[0];
    for (int i = 0; i < b.size(); i++) {
        if (b[i] < min) {
            min = b[i];
        }
    }
    cout << min;
    return 0;
}

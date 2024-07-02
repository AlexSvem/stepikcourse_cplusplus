#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
#include <vector>

using namespace std;

struct olympiad {
    int member_number; // Номер участника олимпиады
    int num_of_points; // Количество баллов
};

bool sort_func (olympiad a, olympiad b)
{
    if (a.num_of_points != b.num_of_points) {
        return a.num_of_points > b.num_of_points;
    } else {
        return a.member_number < b.member_number;
    }
}

int main()
{
    int n;
    cin >> n;
    vector <olympiad> vect(n);

    for (int i = 0; i < n; i++) {
        int temp_member_number, temp_num_of_points;
        cin >> temp_member_number >> temp_num_of_points;
        olympiad struct_temp;
        struct_temp.member_number = temp_member_number;
        struct_temp.num_of_points = temp_num_of_points;
        vect[i] = struct_temp;
    }
    cout << endl;

    sort(vect.begin(), vect.end(), sort_func);
    for (auto now : vect) {
        cout << now.member_number << ' ' << now.num_of_points << endl;
    }

    system("pause");
    return 0;
}

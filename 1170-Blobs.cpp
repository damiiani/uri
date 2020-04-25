#include <bits/stdc++.h>

using namespace std;

int calculate_days(float food);

int main() {
    int n;
    float c;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int days;

        cin >> c;

        days = calculate_days(c);

        cout << days << " dias" << endl;
    }
}

int calculate_days(float food) {
    int days = 0;

    while (food > 1) {
        ++days;

        food /= 2;
    }

    return days;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int id;
    int quantity;
    double lunch[] = {4.0, 4.5, 5.0, 2.0, 1.5};
    double price;

    cin >> id >> quantity;

    price = lunch[id - 1] * quantity;

    cout << fixed;

    cout << setprecision(2) << "Total: R$ " << price << endl;
}

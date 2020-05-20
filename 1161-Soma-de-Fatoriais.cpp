#include <bits/stdc++.h>

using namespace std;

int64_t factorial(int number);

int main() {
    int m;
    int n;
    int64_t sum;

    while (cin >> m >> n) {
        sum = factorial(m) + factorial(n);
        
        cout << sum << endl;
    }
}

int64_t factorial(int number) {
    int64_t out = 1;

    for (int i = 0; i < number; ++i) {
        out *= number - i;
    }

    return out;
}

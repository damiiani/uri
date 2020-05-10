#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

int main() {
    int i = 0;
    size_t found = 0;
    string n;

    cin >> n;

    while (found <= n.size()) {
        found = n.find_first_of('(', i);
        ++i;
    }
    
    found = n.find_first_of('(', i - 1);

    cout << found << endl;
}

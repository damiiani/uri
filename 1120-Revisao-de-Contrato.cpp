#include <bits/stdc++.h>
#include <string>

using namespace std;

// Trim from left
static inline void ltrim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) {
        return !isspace(ch);
    }));
}

// Trim from right
static inline void rtrim(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), s.end());
}

static inline void ztrim(string &s) {
    s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));
}

static inline void trim(string &s) {
    ltrim(s);
    rtrim(s);
    ztrim(s);
}

int main() {
    char d;
    string n;

    while (true) {
        cin >> d >> n;

        if (d == '0' && n == "0") {
            break;
        }

        n.erase(remove(n.begin(), n.end(), d), n.end());

        trim(n);

        if (n == "") {
            n = "0";
        }

        cout << n << endl;
    }
}

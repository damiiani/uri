#include <bits/stdc++.h>

using namespace std;

string encrypt(string words);

int main() {
    string words;

    while (getline(cin, words)) {
        words = encrypt(words);

        cout << words << endl;
    }
}

string encrypt(string words) {
    for (int i = 0; i < words.length(); ++i) {
        if ((words[i] >= 97 && words[i] <= 122) ||
            (words[i] >= 65 && words[i] <= 90)) {

            int rot13 = 13;

            while (((words[i] >= 97 && words[i] < 122) ||
                (words[i] >= 65 && words[i] < 90)) &&
                (rot13 > 0)) {

                ++words[i];
                --rot13;
            }

            if (rot13 > 0) {
                words[i] = words[i] - 26 + rot13;
            }
        }
    }

    return words;
}

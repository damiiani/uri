#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int smallerString;
        string str1;
        string str2;
        string combiner = "";

        cin >> str1 >> str2;

        smallerString = (str1.size() < str2.size()) ? str1.size() : str2.size();

        for (int i = 0; i < smallerString; ++i) {
          combiner += str1[i];
          combiner += str2[i];
        }

        if (str1.size() == smallerString) {
            for (int i = smallerString; i < str2.size(); ++i) {
                combiner += str2[i];
            }
        } else {
            for (int i = smallerString; i < str1.size(); ++i) {
                combiner += str1[i];
            }
        }

        cout << combiner << endl;
    }
}

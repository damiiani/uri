#include <bits/stdc++.h>

using namespace std;

int get_size(string leds);

int main() {
    int counter;
    string leds;

    cin >> counter;

    for (int i = 0; i < counter; ++i) {
        int size;

        cin >> leds;

        size = get_size(leds);

        cout << size << " leds" << endl;
    }
}

int get_size(string leds) {
    int size = 0;

    for (int i = 0; i < leds.length(); ++i) {
        if (leds[i] == '0') {
            size += 6;
        }
        else if (leds[i] == '1') {
            size += 2;
        }
        else if (leds[i] == '2') {
            size += 5;
        }
        else if (leds[i] == '3') {
            size += 5;
        }
        else if (leds[i] == '4') {
            size += 4;
        }
        else if (leds[i] == '5') {
            size += 5;
        }
        else if (leds[i] == '6') {
            size += 6;
        }
        else if (leds[i] == '7') {
            size += 3;
        }
        else if (leds[i] == '8') {
            size += 7;
        }
        else if (leds[i] == '9') {
            size += 6;
        }
    }

    return size;
}

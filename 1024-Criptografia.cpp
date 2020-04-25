#include <bits/stdc++.h>

using namespace std;

void input(char m[], int lenght);

char *firstEncryption(char m[]);
char *secondEncryption(char m[]);
char *thirdEncryption(char m[]);

int main() {
    int n;
    char c;
    char m[1000];

    scanf("%d", &n);
    scanf("%c", &c);

    for (int i = 0; i < n; ++i) {
        input(m, 1000);

        firstEncryption(m);
        strcpy(m, secondEncryption(m));
        thirdEncryption(m);

        printf("%s\n", m);
    }
}

void input(char m[], int lenght) {
    fgets(m, lenght, stdin);

    for (int i = 0; i <= lenght; ++i) {
        if (m[i] == '\n') {
            m[i] = '\0';
            break;
        }
    }
}

char *firstEncryption(char m[]) {
    char *out = m;

    for (int i = 0; i < strlen(out); ++i) {
        if ((out[i] >= 97 && out[i] <= 122) ||
                (out[i] >= 65 && out[i] <= 90)) {
            out[i] += 3;
        }
    }

    return out;
}

char *secondEncryption(char m[]) {
    char *out = new char[1000];

    for (int i = 0; i < strlen(m); ++i) {
        out[i] = m[strlen(m) - i - 1];
    }

    return out;
}

char *thirdEncryption(char m[]) {
    char *out = m;

    for (int i = 0; i < strlen(m); ++i) {
        if (i >= strlen(m) / 2) {
            out[i] -= 1;
        }
    }

    return out;
}
